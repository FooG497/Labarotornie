#include "Stack.h"
//#include "TStack.h"

using namespace std;

template <typename T>
class TNode{
	T num;
	TNode * next;
	TNode * prev;

public:

	TNode();
	TNode(T num);
	TNode(const TNode<T> & n);
	TNode<T> * getNext();
	TNode<T> * getPrev();
	T getData();
	void setNext(TNode<T> * next);
	void setPrev(TNode<T> * prev);
	void setData(T num);
};

template <typename T>
class TStack{
	int count;
	TNode<T> * root;

	TNode<T> * getElem(int index);

public:

	TStack();
	~TStack();
	int getCount();
	void Push(T num);
	T Pop();
	T Peek();
};

int main(int argn, char ** args){
	setlocale(LC_ALL, "rus");
	Stack stc = Stack();
	TStack<double> tStc = TStack<double>();
	for (int i = 1; i <= 10; i++){
		stc.Push(i);
		tStc.Push(1/i);
	}
	cout << stc.getCount() << endl;
	cout << endl;
	int count = stc.getCount();
	for (int i = 0; i < count; i++)
		cout << i << "\t\t" << stc.Pop() << "\t\t" << tStc.Pop() << endl;
	system("Pause");
	
	return 0;
}


template <typename T>
TNode<T>::TNode(){
	num = 0;
	next = prev = NULL;
}

template <typename T>
TNode<T>::TNode(T num){
	this->num = num;
	prev = next = NULL;
}

template <typename T>
TNode<T>::TNode(const TNode<T> & n){
	this->num = n.num;
	this->next = n.next;
	this->prev = n.prev;
}

template <typename T>
TNode<T> * TNode<T>::getNext(){
	return this->next;
}

template <typename T>
TNode<T> * TNode<T>::getPrev(){
	return this->prev;
}

template <typename T>
T TNode<T>::getData(){
	return num;
}

template <typename T>
void TNode<T>::setNext(TNode<T> * next){
	this->next = next;
}

template <typename T>
void TNode<T>::setPrev(TNode<T> * prev){
	this->prev = prev;
}

template <typename T>
void TNode<T>::setData(T num){
	this->num = num;
}


template <typename T>
TStack<T>::TStack(){
	count = 0;
	root = NULL;
}

template <typename T>
int TStack<T>::getCount(){
	return count;
}

template <typename T>
TStack<T>::~TStack(){
	for (int i = 0; i < count; i++)
		Pop();
}

template <typename T>
void TStack<T>::Push(T num){
	TNode<T> * nd = new TNode<T>(num);
	TNode<T> * cElem = NULL;
	if (count == 0){
		root = nd;
		nd->setNext(nd);
		nd->setPrev(nd);
		count++;
	} else {
		cElem = root->getPrev();
		nd->setPrev(cElem);
		nd->setNext(root);
		root->setPrev(nd);
		cElem->setNext(nd);
		count++;
	}
}

template <typename T>
T TStack<T>::Pop(){
	TNode<T> * cElem = NULL;
	T num = 0;
	if (root == NULL)
		return NULL;
	if (count == 1){
		num = root->getData();
		delete root;
		root = NULL;
		count--;
		return num;
	} else {
		cElem = root->getPrev();
		num = cElem->getData();
		root->setPrev(cElem->getPrev());
		cElem->getPrev()->setNext(root);
		delete cElem;
		count--;
		return num;
	}	
}

template <typename T>
TNode<T> * TStack<T>::getElem(int index){
	if (index > this->count)
		return NULL;
	TNode<T> * cElem = root;
	for (int i = 0; i < index; i++){
		cElem = cElem->getNext();
	}
	return cElem;
}

template <typename T>
T TStack<T>::Peek(){
	return root->getNext()->getData();
}