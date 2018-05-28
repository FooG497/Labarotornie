#include "TCQueue.h"

TCQueue::TCQueue(){
	root = NULL;
	count = 0;
	tlf = new TLEFactory();
}

TCQueue::~TCQueue(){
	CLear();
	root = NULL;
	count = 0;
	delete tlf;
}

int TCQueue::getCount(){
	return count;
}

void TCQueue::delHElem(){
	if (count == 0){
		root = NULL;
		return;
	}
	TLElem * tmp = root;
	root = root->getNext();
	delete tmp;
	count--;
}

void TCQueue::delTElem(){
	TLElem * tmp = NULL;
	if (root == NULL)
		return;
	if (count == 1){
		delete root;
		root = NULL;
		count--;
	} else {
		tmp = root->getPrev();
		root->setPrev(tmp->getPrev());
		tmp->getPrev()->setNext(root);
		delete tmp;
		count--;
	}
}

void TCQueue::CLear(){
	while(root != NULL){
		delHElem();
	}
}

TLElem * TCQueue::getElem(int index){
	if (index > this->count || index < 0)
		return NULL;
	TLElem * cElem = root;
	for (int i = 0; i < index; i++){
		cElem = cElem->getNext();
	}
	return cElem;
}

void TCQueue::Push(int d){
	Elem * e = tlf->CreateElem(d);
	TLElem * nElem = static_cast<TLElem * >(e);
	if (count == NULL){
		root = nElem;
		nElem->setNext(nElem);
		nElem->setPrev(nElem);
		count++;
	} else {
		nElem->setNext(root);
		nElem->setPrev(root->getPrev());
		root->getPrev()->setNext(nElem);
		root->setPrev(nElem);
		root = nElem;
		count++;
	}
}

int TCQueue::Pop(){
	TLElem * cElem = NULL;
	int dt = 0;
	if (root == NULL)
		return NULL;
	if (count == 1){
		dt = root->getData();
	} else {
		cElem = root->getPrev();
		dt = cElem->getData();
	}
	delTElem();
	return dt;
}