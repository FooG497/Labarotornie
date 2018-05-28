#include "AElem.h"

AElem::AElem(){
	this->data = 0;
}

AElem::AElem(int d){
	this->data = d;
}

AElem::AElem(const AElem & ae){
	this->data = ae.data;
}

int AElem::getData(){
	return this->data;
}

void AElem::setData(int d){
	this->data = d;
}

Elem * AElem::operator=(Elem * aElem){
	return aElem;
}