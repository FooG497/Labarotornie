#include "Factory.h"
#include "AElem.h"

#ifndef _aefactory_h_
#define _aefactory_h_

class AEFactory : public Factory{
public:
	Elem * CreateElem();
	Elem * CreateElem(int d);
};

#endif