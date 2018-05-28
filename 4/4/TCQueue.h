#include "Storage.h"
#include "TLElem.h"
#include "TLEFactory.h"

#ifndef _tcqueue_h_
#define _tcqueue_h_

class TCQueue : public Storage{
	TLElem * root;
	TLEFactory * tlf;
public:
	TCQueue();
	~TCQueue();
	void Push(int d);
	int Pop();
	void CLear();
	int getCount();
	void delHElem();
	void delTElem();
	TLElem * getElem(int index);
};

#endif