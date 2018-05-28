#include "Context.h"

#ifndef _client_h_
#define _client_h_

class Client : public Context{
public:
	void setStorage(Storage * strg);
	void Push(int d);
	int Pop();
	int getCount();
};

#endif