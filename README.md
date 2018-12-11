# SweetStack
Stack of integers implemented on a Linked List on C++

Developed originally on Visual Studio 2017
This program contain;
	
	- SweetStack.h as a header file
	- SweetStack.cpp as an implementation of the header file
	- main.cpp some code to test and run the program.

NOTE 1: Since the object is pointing to dynamic data, a "destructor" method has been implemented.

NOTE 2: Since the object is pointing to dynamic data, we should implement the copy constructor and the overloaded assignment operator.

To run the program in a command line first go to the folder where the files are saved;
	
	cd SweetStackFolder
	
To compile the files:

	g++ -c SweetStack.cpp
	g++ -c main.cpp
	
To link the files in an executable file (let's call it "aStack");

	g++ -o aStack SweetStack.o main.o
	
To run the executable file write the file name;

	aStack
	
The main.cpp file is where the program is executed, to create a new Stack;

	SweetStack stackName;
	
METHODS:
	
	stackName.push(32)	// will push the number 32 into the stack
	stackName.size()	// returns the number of elements in the stack (integers)
	stackName.pop()		// deletes the node on top of the stack and returns the integer stored in that node
	stackName.max()		// returns the current largest integer in the Stack.
	stackName.~SweetStack()	// destroys the Stack and set all pointers to NULL
	







