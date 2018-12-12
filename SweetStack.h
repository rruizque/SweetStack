/*
	Stack with a Linked List Implementation

	Author: Rodrigo Ruiz Quevedo
	Start date: December 11, 2018
*/

#ifndef ALINKLIST_H
#define ALINKLIST_H

#include<iostream>
#include <string>		// Needed so pointers can be NULL
#include <cstdlib>
#include <stdint.h>
using namespace std;

class Node 
{
public:
	Node() : data(0), link(NULL) {}		// Default constructor
	Node(int32_t theData, Node *theLink) : data(theData), link(theLink) {}
	// Accessors
	Node *getLink() const { return link; }
	int32_t getData() const { return data; }
	// Mutators
	void setLink(Node *theLink) { link = theLink; }
	void setData(int32_t theData) { data = theData; }
	~Node(){}		// Destructor
private:
	int32_t data;
	Node *link;		//points to the next node (NULL if is the last node)

};

class SweetStack
{
public:
	/*
	    virtual void push(int32_t val) = 0; //pushes the value into the stack
        virtual int32_t pop() = 0; //pops the top of the stack and returns it
        virtual int32_t size() = 0; //returns the size of the stack
        virtual int32_t max() = 0; //returns the current max in the stack
	*/
	SweetStack();
		//Default constructor

	void push(int32_t newData);
		// push - Inserts a node to the front of the list
		// @param int - value stored in the inserted node

	int32_t pop();
		// pop - pops the top of the stack and returns it

	int32_t size();
		// size - returns the size of the stack

	int32_t max();
		// max - returns the current max in 

	void print() const;
		// print const - prints all values in the list/stack

	void destroyList();
		// destroyList - destroys all nodes in the list/stack

	~SweetStack();
		//Destructor
private:
	Node *first;	//points to the first node in the list
	int32_t count;		//keeps track of the number of nodes (size of the List/Stack)
	int32_t largest;		// keeps track of the maximum value in the List/Satck
};
#endif
