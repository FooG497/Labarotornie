#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "Elem.h"

#ifndef _factory_h_
#define _factory_h_

class Factory{
public:
	virtual Elem * CreateElem() = 0;
	virtual Elem * CreateElem(int d) = 0;
};

#endif