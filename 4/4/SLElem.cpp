#include "SLElem.h"

SLElem::SLElem(){
	this->data = 0;
	this->next = NULL;
}

SLElem::SLElem(int d){
	this->data = d;
	this->next = NULL;
}

SLElem::SLElem(const SLElem & sle){
	this->data = sle.data;
	this->next = sle.next;
}

int SLElem::getData(){
	return this->data;
}

void SLElem::setData(int d){
	this->data = d;
}

SLElem * SLElem::getNext(){
	return next;
}

void SLElem::setNext(SLElem * next){
	this->next = next;
}