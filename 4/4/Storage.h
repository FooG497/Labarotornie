#include <iostream>
#include <cstdio>
#include <cstdlib>

#ifndef _storage_h_
#define _storage_h_

class Storage{
protected:
	int count;
public:
	virtual void Push(int d) = 0;
	virtual int Pop() = 0;
	virtual void CLear() = 0;
	virtual int getCount() = 0;
};

#endif