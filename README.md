# LFDS test with LazyCseq

A set of tests with LazyCseq of the famous lock-free C library LFDS.  

## Repository Structure

- *lazy-cseq2.0*: lazy-cseq code + python scripts to create benchmarks and test it
- *liblfds7.1.1*: lfds library code
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

Python 3 is suggested to execute some scripts.

## Running and tests
Running and tests are executed both in a single command line.
You just have move across the directories and go to "/lazy-cseq2.0" through the command "cd" and then type:
> python3 generate_benchmark.py -t 2 -o 2 -p LFDS-LazyCseq-Project/workspace/interface/stack/stack_interface.c -s stack -I ../liblfds.1.1/liblfds711/inc 

Here is the explanation of the parameters:
- t: is the number of threads
- o: is the number of operations (insert/delete) for each thread
- p: is the name of the interface. (Our example is based on a stack, but you can test whatever you want)
- s: is the name of the data structure used. (Actually only stack and queue are available)
- I: is for the libraries. (In our example we include liblfds7.1.1 library because we have tested its data structures)

After running this command line, a set of benchmarks we'll be created in "/lazy-cseq2.0/benchmarks" and each of them we'll be tested simultaneously so that a set of possible "states" we'll be placed into an assert saved into "checker.c" in "/lazy-cseq2.0/benchmarks".

At the end the script will return "true" if the data structure doesn't have any bug or "false" contrarily.

## Built With
* [Visual Studio Code](https://code.visualstudio.com/) 

## Authors
* **Luigi Crisci** - *Initial work* - [Luigi-Crisci](https://github.com/Luigi-Crisci)
* **Silvio Corso** - *Initial work* - [s-corso-98](https://github.com/s-corso-98)
* **Giuseppe Di Palma** - *Initial work* - [GiuseppeDiPalma](https://github.com/GiuseppeDiPalma)
* **Carmine Tramontano** - *Initial work* - [carminet94](https://github.com/carminet94)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

