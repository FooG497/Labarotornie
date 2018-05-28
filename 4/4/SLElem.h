#include "Elem.h"

#ifndef _slelem_h_
#define _slelem_h_

class SLElem : public Elem{
protected:
	SLElem * next;
public:
	SLElem();
	SLElem(int d);
	SLElem(const SLElem & sle);
	int getData();
	void setData(int d);
	SLElem * getNext();
	void setNext(SLElem * next);
};

#endif