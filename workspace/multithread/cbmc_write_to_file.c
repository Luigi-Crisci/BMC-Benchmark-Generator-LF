#include<stdlib.h>
#include<fcntl.h>

int main(){
	int fd = open("a.txt",O_CREAT | O_TRUNC | O_WRONLY);
	int x = 5;
	write(fd,&x,sizeof(int));
	return 0;
}