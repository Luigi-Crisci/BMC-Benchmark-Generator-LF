#include <stdlib.h>  
#include <stdio.h> 
#include <errno.h>   
#include <string.h> 
   
typedef struct NODE_PAYLOAD_S
	{
	struct lfds711_stack_element se;
	int long long unsigned user_id;
	} NODE_PAYLOAD_T;

typedef struct LIST_NODE_S
    {
    struct LIST_NODE_S *next;    
    NODE_PAYLOAD_T payload;
    } LIST_NODE_T;

/*****************************************************************************
** Allocate, initialize, and insert a new node at the list head.
*/
int LIST_InsertHeadNode(LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id)
{
   int rCode=0;
   LIST_NODE_T *newNode = NULL;

   /* Allocate memory for new node (with its payload). */
   newNode=malloc(sizeof(*newNode));
   if(NULL == newNode)
      {
      rCode=ENOMEM;
      fprintf(stderr, "malloc() failed.\n");
      goto CLEANUP;                        
      }

   /* Initialize the new node's payload. */
   newNode->payload.se = I__se;
   newNode->payload.user_id = I__user_id;

   /* Link this node into the list as the new head node. */
   newNode->next = *IO_head;
   *IO_head = newNode;

CLEANUP:

   return(rCode);
}

/*****************************************************************************
** Print the payloads of each node (from head to tail) in a linked list.
*/
int PrintListPayloads(LIST_NODE_T *head)
{
	int rCode=0;
	LIST_NODE_T *cur = head;
	//int nodeCnt=0;
	while(cur)
	{
    	//++nodeCnt;
    	printf("%lld",cur->payload.user_id);
		cur=cur->next;
      if(cur!=NULL)
         printf(",");
    }
   printf("\n");
    //printf("\n%d nodes printed.\n", nodeCnt);
   return(rCode);
}


/*****************************************************************************
** Print list size
*/
int GetListSize(LIST_NODE_T *head)
{
	LIST_NODE_T *cur = head;
	int nodeCnt=0;
   while(cur)
   {
      ++nodeCnt;
      cur = cur->next;
   }
   return nodeCnt;

}

/*****************************************************************************
** Get the last list node by walking the list.
*/
int LIST_GetTailNode(LIST_NODE_T  *I__listHead, LIST_NODE_T **_O_listTail )
   {
   int rCode=0;
   LIST_NODE_T *curNode = I__listHead;

   /* Iterate through all list nodes until the last node is found. */
   /* The last node's 'next' field, which is always NULL. */
   if(curNode)
      {
      while(curNode->next)
         curNode=curNode->next;
      }

   /* Set the caller's pointer to point to the last (ie: tail) node. */
   if(_O_listTail)
      *_O_listTail = curNode;

   return(rCode);
   }

/*****************************************************************************
** Allocate, initialize, and insert a new node at the list tail.
*/
int LIST_InsertTailNode(LIST_NODE_T **IO_head, struct lfds711_stack_element I__se, int long long unsigned I__user_id)
{
   int rCode=0;
   LIST_NODE_T *tailNode;
   LIST_NODE_T *newNode = NULL;

   /* Get a pointer to the last node in the list. */
   rCode=LIST_GetTailNode(*IO_head, &tailNode);
   if(rCode)
      {
      fprintf(stderr, "LIST_GetTailNode() reports: %d\n", rCode);
      goto CLEANUP;
      }

   /* Allocate memory for new node (with its payload). */
   newNode=malloc(sizeof(*newNode));
   if(NULL == newNode)
      {
      rCode=ENOMEM;   /* ENOMEM is defined in errno.h */
      fprintf(stderr, "malloc() failed.\n");
      goto CLEANUP;
      }

   /* Initialize the new node's payload. */
   newNode->payload.user_id = I__user_id;
   newNode->payload.se = I__se;

   /* Link this node into the list as the new tail node. */
   newNode->next = NULL;
   if(tailNode)
      tailNode->next = newNode;
   else
      *IO_head = newNode;

CLEANUP:

   return(rCode);
}      

/*****************************************************************************
** Find a node with a payload->name string greater than the I__name string.
*/
int LIST_FetchParentNodeById(LIST_NODE_T *I__head, int long long unsigned I__user_id,LIST_NODE_T **_O_parent)
   {
   int rCode=0;
   LIST_NODE_T *parent = NULL;
   LIST_NODE_T *curNode = I__head;

   /* Inform the caller of an 'empty list' condition. */
   if(NULL == I__head)
      {
      rCode=ENOENT;
      goto CLEANUP;
      }

   /* Find a node with a payload->name string greater than the I__name string */
   while(curNode)
      {
      if(curNode->payload.user_id > I__user_id)
         break;

      parent = curNode; /* Remember this node. It is the parent of the next node. */
      curNode=curNode->next;  /* On to the next node. */
      }

   /* Set the caller's 'parent' pointer. */
   if(_O_parent)
      *_O_parent = parent;

CLEANUP:

   return(rCode);
   }


/*****************************************************************************
** Allocate, initialize, and insert a new node in an ordered list.
*/
int LIST_InsertNodeById(LIST_NODE_T **IO_head, int long long unsigned I__user_id, struct lfds711_stack_element I__se)
{
   int rCode=0;
   LIST_NODE_T *parent;
   LIST_NODE_T *newNode = NULL;

   /* Allocate memory for new node (with its payload). */
   newNode=malloc(sizeof(*newNode));
   if(NULL == newNode)
      {
      rCode=ENOMEM;   /* ENOMEM is defined in errno.h */
      fprintf(stderr, "malloc() failed.\n");
      goto CLEANUP;
      }

   /* Initialize the new node's payload. */
   newNode->payload.user_id = I__user_id;
   newNode->payload.se = I__se;

   /* Find the proper place to link this node */
   rCode=LIST_FetchParentNodeById(*IO_head, I__user_id, &parent);
   switch(rCode)
      {
      case 0:
         break;

      case ENOENT:
         /* Handle empty list condition */
         newNode->next = NULL;
         *IO_head = newNode;
         rCode=0;
         goto CLEANUP;

      default:
         fprintf(stderr, "LIST_FetchParentNodeByName() reports: %d\n", rCode);
         goto CLEANUP;
      }

   /* Handle the case where all current list nodes are greater than the new node. */
   /* (Where the new node will become the new list head.) */
   if(NULL == parent)
      {
      newNode->next = *IO_head;
      *IO_head = newNode;
      goto CLEANUP;
      }

   /* Final case, insert the new node just after the parent node. */
   newNode->next = parent->next;
   parent->next = newNode;

CLEANUP:

   return(rCode);
 }

/*****************************************************************************
** Find a specific node by name.
*/
int LIST_FetchNodeById(LIST_NODE_T  *I__head,int long long unsigned I__user_id,LIST_NODE_T **_O_node,LIST_NODE_T **_O_parent)
{
   int rCode=0;
   LIST_NODE_T *parent = NULL;
   LIST_NODE_T *curNode = I__head;

   /* Search the list for a matching payload name. */
   while(curNode)
      {
      if(curNode->payload.user_id == I__user_id)
         break;

      parent = curNode;   /* Remember this node; it will be the parent of the next. */
      curNode=curNode->next;
      }

   /* If no match is found, inform the caller. */
   if(NULL == curNode)
     {
     rCode=ENOENT;
     goto CLEANUP;
     }

   /* Return the matching node to the caller. */
   if(_O_node)
      *_O_node = curNode;

   /* Return parent node to the caller. */
   if(_O_parent)
      *_O_parent = parent;

CLEANUP:

   return(rCode);
}

/*****************************************************************************
** Locate a specific node by name, unlink it from the list, and free it.
*/
int LIST_DeleteNodeById(LIST_NODE_T **IO_head, int long long unsigned I__user_id)
{
   int rCode=0;
   LIST_NODE_T *parent;
   LIST_NODE_T *delNode = NULL;

   /* Find the node to delete. */
   rCode=LIST_FetchNodeById(*IO_head, I__user_id, &delNode, &parent);
   switch(rCode)
      {
      case 0:
         break;

      case ENOENT:
         fprintf(stderr, "Matching node not found.\n");
         goto CLEANUP;

      default:
         fprintf(stderr, "LIST_FetchNodeByName() reports: %d\n", rCode);
         goto CLEANUP;
      }

   /* Unlink the delNode from the list. */
   if(NULL == parent)
      *IO_head = delNode->next;
   else
      parent->next = delNode->next;

   /* Free the delNode and its payload. */
   free(delNode);

CLEANUP:

   return(rCode);
}

/*****************************************************************************
** Free all list nodes (from head to tail).
*/
int LIST_Destroy(LIST_NODE_T **IO_head)
{
   int rCode=0;

   while(*IO_head)
      {
      LIST_NODE_T *delNode = *IO_head;
   
      *IO_head = (*IO_head)->next;   
      free(delNode);
      }
   
   return(rCode);
}
      
