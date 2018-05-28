#include "TLElem.h"

TLElem::TLElem(){
	this->data = 0;
	this->next = NULL;
	this->prev = NULL;
}

TLElem::TLElem(int d){
	this->data = d;
	this->next = NULL;
	this->prev = NULL;
}

TLElem::TLElem(const TLElem & tle){
	this->data = tle.data;
	this->next = tle.next;
	this->prev = tle.prev;
}

int TLElem::getData(){
	return this->data;
}

void TLElem::setData(int d){
	this->data = d;
}

TLElem * TLElem::getNext(){
	return this->next;
}

void TLElem::setNext(TLElem * nxt){
	this->next = nxt;
}

TLElem * TLElem::getPrev(){
	return this->prev;
}

void TLElem::setPrev(TLElem * prv){
	this->prev = prv;
}