#include "Storage.h"
#include "AElem.h"
#include "AEFactory.h"

#ifndef _array_h_
#define _array_h_

class Array : public Storage {
	AElem * arr;
	AEFactory * aef;
public:
	Array();
	~Array();
	void Push(int d);
	int Pop();
	void CLear();
	int getCount();
	AElem operator[](int index);
};

#endif