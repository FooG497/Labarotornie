#include "Elem.h"

#ifndef _aelem_h_
#define _aelem_h_

class AElem : public Elem {
public:
	AElem();
	AElem(int d);
	AElem(const AElem & ae);
	int getData();
	void setData(int d);
	Elem * operator=(Elem * aElem);
};

#endif