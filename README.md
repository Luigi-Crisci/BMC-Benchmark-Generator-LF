# LazyCseq Benchmark Generator

A python script for generating benchmark on lock-free data strucures.  

## Repository Structure

- *lazy-cseq2.0*: lazy-cseq code + python scripts to create benchmarks and test it
- *liblfds7.1.1*: lfds library code (as an example)
- *workspace*: utilities libraries and some c files used to develop and test the software

## Getting Started
Just clone the github repository to get all the files you need to execute the code.

### Prerequisites
You need to install all the prerequisites necessary to run properly lazy-cseq:
- Python 2.7
- [PYCParser 2.17](https://github.com/eliben/pycparser) (`pip install pycparser==2.17`)
- Backends:
  + [CBMC](http://www.cprover.org/cbmc/) (cbmc 19.0)

- Ubuntu SO

Python 3 is needed to execute the program.

## What it does and how to use it

This software aims to be a generic framework for bounded model checking on various lock-free data structure.  
With a given data structure, information about the number of threads and how many operation each thread has to perform, it generates all possible combination of program configuration with each operation. In this phase, each operation is **atomic**: each operation is surrouded by a lock\unlock so that the lock-free behaviour is suppressed.
Each configuration is then tested for `rounds` different interleavings, saving all states found.  
When all states are found, the lock are removed so that the lock-free behaviour is restored and the structure is tested again. If a state different from the ones found before is found, than the structure has a bug and a counterexample is provided.

To test a structure with this software an user needs to define a simple *interface* composed of the following methods: 
- `STRUCT NAME* init()`: This method initialize the structure and return a pointer to it;
- `void insert(STRUCT NAME,int ID)`: this method insert an element with id ID into the structure. Note that no constrain about the type of the structure is defined
- `int delete(STRUCT NAME)`: Delete an element from the structure. How and where to delete is defined by the user;
- `int dump_structure(STRUCT NAME,int* ids)`: make a dump of the structure, putting 1 in the ids vector in the positions related to id found in the structure. Es. if an item with id 3 is present inside the structure, than `ids[3] = 1`.  The ids vector is already initialized.  

Note that `cbmc` need to know *all methods body* or it will simulate them, so if a library method is used, a body for it must be provided. Es. for the `open()` function no source file is provided by default, so an implementation of it must be provided.  

Some basic function library are already handled by cbmc, and some others are provided in the `placeholder_library.c` under `workspace` folder.

## Running and tests
Running and tests are executed both in a single command line.
You just have move across the directories and go to "/lazy-cseq2.0" through the command "cd" and then type:
> python3 generate_benchmark.py -t n -o n -p "Interface path" -s "data structure type" -I "gcc -I params" -N "data structure name" -r n

Here is the explanation of the parameters:
- t: is the number of threads
- o: is the number of operations for each thread
- p: is the path to the interface of the data structure to be tested
- s: is the name of the data structure used. (Actually only stack and queue are supported)
- I: is for the libraries.
- N: the data structure name, as it is when defining it in a c program
- r: num rounds to be performed when testing (*CAVEAT:* more than 3/4 rounds can lead to extremely long waiting time)

The program generates a set of benchmark in `lazy-cseq2.0/benchmarks/benchmark_DATE`, where DATE is a representaion of the date in which the program is executed.  
Every benchmark is tested and if one of them fault an error message is raised

## Examples

As an example, an interface for the `lfds library stack` is provided.  
Under `workspace/inteface/stack` you can find the interface for that structure

## Built With
* [Visual Studio Code](https://code.visualstudio.com/) 

## Authors
* **Luigi Crisci** - *Initial work* - [Luigi-Crisci](https://github.com/Luigi-Crisci)
* **Silvio Corso** - *Initial work* - [s-corso-98](https://github.com/s-corso-98)
* **Giuseppe Di Palma** - *Initial work* - [GiuseppeDiPalma](https://github.com/GiuseppeDiPalma)
* **Carmine Tramontano** - *Initial work* - [carminet94](https://github.com/carminet94)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

