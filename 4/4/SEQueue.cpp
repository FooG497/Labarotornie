#include "SEQueue.h"

SEQueue::SEQueue(){
	count = 0;
	head = tail = NULL;
	slf = new SLEFactory();
}

SEQueue::~SEQueue(){
	CLear();
	count = 0;
	head = tail = NULL;
	delete slf;
}

int SEQueue::getCount(){
	return this->count;
}

void SEQueue::CLear(){
	while (head != NULL)
		delHElem();
}

void SEQueue::delHElem(){
	SLElem * tmp = head;
	head = head->getNext();
	delete tmp;
	count--;
}

SLElem * SEQueue::getElem(int index){
	if (index >= count || index < 0)
		return NULL;
	SLElem * tmp = head;
	for (int i = 0; i < index; i++){
		tmp = tmp->getNext();
	}
	return tmp;
}

void SEQueue::delTElem(){
	if (count == 1){
		delHElem();
		head = tail = NULL;
		count--;
		return;
	}
	if (count == 0){
		head = tail = NULL;
		return;
	}
	SLElem * nTail = getElem(count - 2);
	nTail->setNext(NULL);
	delete tail;
	tail = nTail;
	count--;
}

void SEQueue::Push(int d){
	SLElem * tmp = static_cast<SLElem * >(slf->CreateElem(d));
	if (head == NULL){
		head = tail = tmp;
	} else {
		tmp->setNext(head);
		head = tmp;
	}
	count++;
}

int SEQueue::Pop(){
	if (head == NULL)
		return NULL;
	int res = tail->getData();
	delTElem();
	return res;
}