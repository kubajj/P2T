# P2T
## C
``` c
#include <stdio.h>
```

### Lecture 1:
 - C is medium-level, structured, procedural, imperative programmming language
 - close to low-level (assembly language), but does not map the functions one-to-one
 - we can use functions to call parts of code multiple times

#### C program Structure
``` c
#include <stdio.h> # starts with this, tells the linker, where to find needed libraries

int main() # each c program has to have main function, but there can be other functions as well
{
	int i, j; # these are declarations and statement
	i = 3;
	j = i * 2;
	printf("%d doubled is %d\n",i,j); # function-call statement
	return 0;
}
```

#### Running code
 - to run C program, we usually use `gcc -o test myProg.c`, where test is the output file
 - then we use `./test`

#### Types
 - integers - numbers
 	- short - 2 bytes
 	- int - 4 bytes
 	- long - 8 bytes
 	- each type has also signed and unsigned (positive only) subtype
 - floating-point numbers
 	- float - 4 bytes
 	- double - 8 bytes
 	- long double - 16 bytes
 - other types:
	 - characters
	 	- single caracters of text
	 	- only single quotes `'...'`
	 	- they use ASCII
	 	- to print special characters, such as quotes, we have to escape them
	 		- `\'`
	 - void

#### Computer memory
 - bit is the smallest stored information - 0/1
 - byte is more useful part of mmemory, as it is 8 bits
 - complete unit of memory is called a word, which consists of one or more bytes
 - memory can be expressed as a huge number of rows, where each row is a word

#### Operators
 - they let us modify the variables
 - LECTURE NOTES FOR THESE
 - Arithmetic Operators
 	- they work on any data type that is numeric
 	- division of two integers is rounded down
 	- if we mix floats with ints, the result will be float
 - Logical Operators
 	- operators for boolean operations `&&` - and, `||` - or, `!` - not
 - Others
 	- `sizeof()` - number of bytes that the object uses
 	- it is not a function, it is an operator

### Lecture 2:
#### Casts: Converting types
 - some operators automatically change the opeerands to the type that they need
 - we can explicitly change the type of a value using a cast
 - ex.:
``` c
myDouble = (double) myfloat;
```

#### Variables
 - we need variables to store results of our calculations
 - they provide a way to store values of a given type, with associated identifier ("variable name") to refer to the storage loacation
 - the name cannot start with a number and cannot be the same as any of the C keywords
 - we must declare variables with a type

##### Declaring variables
 - simple declaration form

 - we might need to assign the initial value

 - **lecture notes**

##### Operators on variables
 - any previously mentioned oprators will work on the values stored in variable
 **table from lecture notes**

##### Gotchas...
 - assignment `=` vs equality operator `==`

##### The printf() function
 - it is contained in `<stdion.h>` and is used to print to the screen
 - standard form is: `printf(format, expression-1, expression-2, ...)`
 - **include table from lecture notes**
 - `\n` is the newline sign
 - **include table from lecture notes**

##### The if statement
``` c
 if (test1) {
 	some statements:
 }
 else if (test2) {
 	more statements;
 }
 else {
 	catch all statement;
 }
```

##### The switch case construct
 - we can use long chains of else ifs to test a variable for many different values, or we can use this:
``` c
switch (expression) {
	case value1: 
		some statements;
		break;
	case value2:
		different statements;
		break;
	default:
		default statements;
}
```

##### Loops
 - we want to do the same operation multiple times

##### While
``` c
while (test) {
	...
	some statements;
	...
}
```

###### The do while construct
 - it will always do it at least once
``` c
do {
	some statements;
} while (test);
```

###### For loop
``` c
for (init; test; iter) {
	some statements;
}
```
 - ex.:
``` c
for (int i = 0; i <= 10; i++) {
	printf("%d", i);
}
```

###### Breaking out of loops - continue and break
 - continue skips the rest of the loop body and goes to the next iteration
 - break stops the execution of the loop
``` c
while (test) {
	if (x == 3) {
		break;
	}
	else if (x == 4) {
		continue;
	}
	else {
		printf("%d\n", s);
	}
}
```








## Linux
### Lecture 1:
 - there was a time when datacenters were cool
 - MULTICS was a mainframe operating system that will be probably cheaper - there was a guy Ken Thompson
 - Ken created a game Space Travel
 	- he wrote an operating system, so he did not have to compile his code from the tape  every time he changed something
 	- in Summer of 1969 he created a Kernel, Shell, ...
 - Bell Labs thought that it is nice and that was the birth of UNIX
 - in 1970 Ken created B and then rewrote it, which is how C was born

#### UNIX
 - it can handle multiple users and multiple tasks
 - all data was plain text
 - hierarchical file system
 - devices and processes represented as files
 - the use of a large number of software tools, small programs tat can be composed as opposed to using a single monolithic program
 - pure UNIX childer are BSDs - Barclay Standard Distribution
 - there are also other distibutions

#### Minix
 - microcontroller system
 - it was created for teaching

#### Linux
 - Linus Benedict Thorvalds (\*1969)
	- he was frustrated by the licensing associated to Minix, so he created his own operating system
	- he named it Freaks, but his friend which was uploading it to an FTP server changed the name to Linux
 - it is free
 - it runs almost everywhere - from mbeds to supercomputers

##### Distros
 - Debian based
 - RHEL based
 - Arch based
 - we are using CentOS - RHEL based distro

##### The command line
 - there are different shells available: Sh, BASh, CSh, TCSh, ZSh, FISh <3, ...
 - C-style shells: C-like syntax for scripting
 - commands are of the form
``` bash
prompt# <command> <flags> <arguments>
prompt# du -h --max-depth=1
```

##### Useful commands
``` bash
history # gives all commands your entered (probably up to 1000)
!! # runs the last command
!<number> # runs the command with <number> in history
up/down arrows 
␉ # tab completition
ctrl-r
ctrl-l # moves the view one screen below in the command line
```

### Lecture 2: Started during the first one
#### Filesystem
 - in Linux, it is hierarchical
 - there are files and folders (which are actually files as well)
 - it begins with the "root" node
 - each "file" or node in the tree has a name, which is case sensitive, and a unique identifier called it's **inode**
 - there are different types of files
 	- regular files: -
 	- directories: d
 	- links: l
 	- special file: c
 	- sockets: s - files on a remote machines
 	- named pipes: p