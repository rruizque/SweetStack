/*
Stack with a Linked List Implementation

Author: Rodrigo Ruiz Quevedo
Start date: December 11, 2018
*/

#include "SweetStack.h"
#include <cstdlib>

//constructor
SweetStack::SweetStack()
{
	first = NULL;
	count = 0;
	largest = 0;
}

void SweetStack::push(int newData)
{
	Node *newNode = new Node;	// creates a new node and a pointer to it
	newNode->setLink(first);
	//iif is the first node on the Stack
	if (first == NULL)
	{
		largest = newData;
		newNode->setData(newData);
	}
	else
	{
		if (newData > largest)		// larger than current max value
		{
			int flag = (2 * newData) - largest;		//create a flag value that indicates this the new mx and keeps track of the previous max
			newNode->setData(flag);					// set the data variable to flag value
			largest = newData;						// set new max value
		}
		// smaller than max value
		else
		{
			newNode->setData(newData);
		}
	}
	
	first = newNode;		// the new node is now the first node
	count++;				// updates the size of the stack
}

int SweetStack::pop()
{
	if (first == NULL)
	{
		cerr << "Cannot delete from an empty stack \n";
	}
	else
	{
		int temp = first->getData();	// check if is a flag for max value
		Node *current = first;			// new node pointing to the top
		first = first->getLink();		// second node is the now on top of the stack

		if (temp < largest)				// if is not a node with a max value
		{
			count--;						// updates the size of the stack
			delete current;
			current = NULL;
			return temp;					// returning the data of the node popped
		}
		else
		{
			int temp2 = largest;		// what it needs to return
			largest = (2 * largest) - temp;
			count--;						// updates the size of the stack
			delete current;
			current = NULL;
			return temp2;					// returning the data of the node old max value
		}

	}
}

// size - returns the size of the stack
int SweetStack::size()
{
	return count;
}

// max - returns the current max in 
int SweetStack::max()
{
	if (first == NULL)
	{
		cerr << "The Stack is empty, there is no max number \n";
		//return 0;
	}
	else if(first != NULL)
	{
		return largest;
	}
	
}

// print const - prints all values in the list/stack
void SweetStack::print() const
{
	if (first == NULL)
	{
		cerr << "The Stack is empty \n";
	}
	else
	{
		Node *current = first;

		while (current != NULL)
		{
			cout << current->getData() << " ";	// print the data
			current = current->getLink();		// moves the pointer forward
		}
		cout << "\n";
	}
}


void SweetStack::destroyList()
{
	Node *temp;			// pointer to delete the nodes
	while (first != NULL)
	{
		temp = first;
		first = first->getLink();
		delete temp;
		temp = NULL;
	}
	count = 0;
}

SweetStack::~SweetStack()
{
	destroyList();
}