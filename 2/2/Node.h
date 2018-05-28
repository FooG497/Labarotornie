#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

class Node{
	int num;
	Node * next;
	Node * prev;
public:
	Node();
	Node(int num);
	Node(const Node & n);
	Node * getNext();
	Node * getPrev();
	int getData();
	void setNext(Node * next);
	void setPrev(Node * prev);
	void setData(int num);
};