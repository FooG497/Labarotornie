#include "AEFactory.h"

Elem * AEFactory::CreateElem(){
	return new AElem();
}

Elem * AEFactory::CreateElem(int d){
	return new AElem(d);
}