#include "Factory.h"
#include "SLElem.h"

#ifndef _slefactory_h_
#define _slefactory_h_

class SLEFactory : public Factory{
public:
	Elem * CreateElem();
	Elem * CreateElem(int d);
};

#endif