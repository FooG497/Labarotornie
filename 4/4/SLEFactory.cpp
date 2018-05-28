#include "SLEFactory.h"

Elem * SLEFactory::CreateElem(){
	return new SLElem();
}

Elem * SLEFactory::CreateElem(int d){
	return new SLElem(d);
}