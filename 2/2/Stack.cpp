#include "Stack.h"

Stack::Stack(){
	count = 0;
	root = NULL;
}

int Stack::getCount(){
	return count;
}

Stack::~Stack(){
	for (int i = 0; i < count; i++)
		Pop();
}

void Stack::Push(int num){
	Node * nd = new Node(num), * cElem = NULL;
	if (count == 0){
		root = nd;
		nd->setNext(nd);
		nd->setPrev(nd);
		count++;
	} else {
		cElem = root->getPrev();
		nd->setPrev(cElem);
		nd->setNext(root);
		root->setPrev(nd);
		cElem->setNext(nd);
		count++;
	}
}

int Stack::Pop(){
	Node * cElem = NULL;
	int num = 0;
	if (root == NULL)
		return NULL;
	if (count == 1){
		num = root->getData();
		delete root;
		root = NULL;
		count--;
		return num;
	} else {
		cElem = root->getPrev();
		num = cElem->getData();
		root->setPrev(cElem->getPrev());
		cElem->getPrev()->setNext(root);
		delete cElem;
		count--;
		return num;
	}	
}

Node * Stack::getElem(int index){
	if (index > this->count)
		return NULL;
	Node * cElem = root;
	for (int i = 0; i < index; i++){
		cElem = cElem->getNext();
	}
	return cElem;
}

int Stack::Peek(){
	return root->getNext()->getData();
}