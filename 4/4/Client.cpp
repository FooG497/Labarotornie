#include "Client.h"

void Client::setStorage(Storage * strg){
	this->strg = strg;
}

void Client::Push(int i){
	strg->Push(i);
}

int Client::Pop(){
	return strg->Pop();
}

int Client::getCount(){
	return strg->getCount();
}