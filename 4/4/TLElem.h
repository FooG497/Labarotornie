#include "Elem.h"

#ifndef _tlelem_h_
#define _tlelem_h_

class TLElem: public Elem{
protected:
	TLElem * next;
	TLElem * prev;
public:
	TLElem();
	TLElem(int d);
	TLElem(const TLElem & tle);
	int getData();
	void setData(int d);
	TLElem * getNext();
	void setNext(TLElem * nxt);
	TLElem * getPrev();
	void setPrev(TLElem * prv);
};

#endif