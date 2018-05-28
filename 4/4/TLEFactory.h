#include "Factory.h"
#include "Elem.h"
#include "TLElem.h"

#ifndef _tlefactory_h_
#define _tlefactory_h_

class TLEFactory : public Factory{
public:
	Elem * CreateElem();
	Elem * CreateElem(int d);
};

#endif