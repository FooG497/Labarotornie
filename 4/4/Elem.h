#include <iostream>
#include <cstdio>
#include <cstdlib>

#ifndef _elem_h_
#define _elem_h_

class Elem{
protected:
	int data;
public:
	virtual int getData() = 0;
	virtual void setData(int d) = 0;
};

#endif