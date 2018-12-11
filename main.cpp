/*
Stack with a Linked List Implementation

Author: Rodrigo Ruiz Quevedo
Start date: December 11, 2018
*/


#include "SweetStack.h"

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	cout << "Hello, World!" << endl;
	SweetStack myStack;
	/*
	myStack.print();
	myStack.pop();
	myStack.max();
	*/
	myStack.push(-32);
	myStack.push(-29);
	cout << "The current max value is: " << myStack.max() << endl;

	myStack.push(7);
	myStack.push(3);
	myStack.push(99);
	myStack.push(45);
	myStack.push(-3);
	myStack.push(123);
	myStack.print();
	cout << "The size of the list is: " << myStack.size() << endl;
	cout << "The current max value is: " << myStack.max() << endl;
	cout << "Poping the last element " << myStack.pop() << endl;
	cout << "The current max value is: " << myStack.max() << endl;
	cout << "The size of the list is " << myStack.size() << endl;
	for (int i = myStack.size(); i > 0; i--)
	{
		cout << "The size of the list is " << myStack.size() << endl;
		cout << "Poping the last element " << myStack.pop() << endl;
		myStack.max();
	}
	cout << endl;

	/*
	cout << "Poping the last element " << myStack.pop() << endl;
	myStack.print();
	cout << "The size of the list is " << myStack.size() << endl;
	for (int i = myStack.size(); i > 0; i--)
	{
		cout << "The size of the list is " << myStack.size() << endl;
		cout << "Poping the last element " << myStack.pop() << endl;
		cout << "The current max value is: " << myStack.max() << endl;
	}

	cout << "The size of the list is " << myStack.size() << endl;
	myStack.pop();
	*/

	system("Pause");
	return 0;
}