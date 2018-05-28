#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

#include "Node.h"

class Stack{
	int count;
	Node * root;

	Node * getElem(int index);

public:
	Stack();
	~Stack();
	int getCount();
	void Push(int num);
	int Pop();
	int Peek();
};