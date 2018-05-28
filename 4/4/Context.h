#include "Storage.h"

#ifndef _context_h_
#define _context_h_

class Context{
protected:
	Storage * strg;
public:
	virtual void setStorage(Storage * strg) = 0;
	virtual void Push(int d) = 0;
	virtual int Pop() = 0;
	virtual int getCount() = 0;
};

#endif