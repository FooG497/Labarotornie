#include "Array.h"

Array::Array(){
	count = 0;
	arr = NULL;
	aef = new AEFactory();
}

Array::~Array(){
	if (arr != NULL && count > 0){
		delete arr;
		arr = NULL;
	}
	delete aef;
}

void Array::CLear(){
	if (arr != NULL && count > 0){
		delete arr;
		arr = NULL;
	}
}

int Array::getCount(){
	return count;
}

AElem Array::operator[](int index){
	if (index < 0 || index >= count)
		return NULL;
	else
		return arr[index];
}

void Array::Push(int d){
	int nCount = count + 1;
	AElem * tmp = new AElem[nCount];
	tmp[0] = * static_cast<AElem *>(aef->CreateElem(d));
	for (int i = 0; i < count; i++){
		tmp[i+1] = arr[i];
	}
	delete arr;
	arr = tmp;
	count = nCount;
}

int Array::Pop(){
	int dt = arr[count - 1].getData(), nCount = count - 1;
	AElem * tmp = new AElem[nCount];
	for (int i = 0; i < nCount; i++){
		tmp[i] = arr[i];
	}
	delete arr;
	arr = tmp;
	count = nCount;
	return dt;
}