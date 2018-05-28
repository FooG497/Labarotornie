#include "TLEFactory.h"

Elem * TLEFactory::CreateElem(){
	return new TLElem();
}

Elem * TLEFactory::CreateElem(int d){
	return new TLElem(d);
}