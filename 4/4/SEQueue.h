#include "Storage.h"
#include "SLElem.h"
#include "SLEFactory.h"

#ifndef __sequeue_h_
#define __sequeue_h_

class SEQueue : public Storage{
	SLElem * head;
	SLElem * tail;
	SLEFactory * slf;
public:
	SEQueue();
	~SEQueue();
	void Push(int d);
	int Pop();
	void CLear();
	int getCount();
	void delHElem();
	void delTElem();
	SLElem * getElem(int index);
};

#endif