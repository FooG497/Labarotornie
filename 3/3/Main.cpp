#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

template <typename T>
class Node{	
protected:
	T num;
public:
	virtual T getData() = 0;
	virtual void setData(T num) = 0;
};

template <typename T>
class List {
protected:
	int count;
public:
	virtual void Push(T num) = 0;
	virtual T Pop() = 0;
	virtual int getCount() = 0;
	virtual void Clear() = 0;
};

template <typename T>
class SElem : public Node<T>{
protected:
	SElem<T> * next;
public:
	SElem();
	SElem(T num);
	SElem(const SElem<T> & se);
	SElem(SElem<T> * next, T num);
	T getData();
	void setData(T num);
	SElem<T> * getNext();
	void setNext(SElem<T> * nxt);
};

template <typename T>
class TNode : public Node<T>{
protected:
	TNode<T> * next;
	TNode<T> * prev;
public:
	TNode();
	TNode(T num);
	TNode(const TNode<T> & n);
	T getData();
	void setData(T num);
	void setNext(TNode<T> * next);
	void setPrev(TNode<T> * prev);
	TNode<T> * getNext();
	TNode<T> * getPrev();
};

template <typename T>
class SLStack : public List<T> {
protected:
	SElem<T> * head;
	SElem<T> * tail;

	void delElem();
public:
	SLStack();
	~SLStack();
	void Push(T num);
	T Pop();
	int getCount();
	void Clear();
	SElem<T> * getElem(int index);
};

template <typename T>
class TStack : public List<T>{
	TNode<T> * root;

	TNode<T> * getElem(int index);
	void delElem();
public:
	TStack();
	~TStack();
	int getCount();
	void Clear();
	void Push(T num);
	T Pop();
	T Peek();
};

int main(int argn, char ** args){
	setlocale(LC_ALL, "rus");
	List<long> * ptr1 = new SLStack<long>(),
		& ptr2 =  TStack<long>();
	for (int i = 0; i < 10; i++){
		ptr1->Push(i);
		ptr2.Push(i);
	}
	for (int i = 0; i < 10; i++){
		cout << i << "\t\t" << ptr1->Pop() << "\t\t" << ptr2.Pop() << endl;
	}
	delete ptr1;
	system("pause");
	return 0;
}

template <typename T>
SElem<T>::SElem(){
	num = 0;
	next = NULL;
}

template <typename T>
SElem<T>::SElem(T num){
	this->num = num;
	next = NULL;
}

template <typename T>
SElem<T>::SElem(const SElem<T> & se){
	num = se.num;
	next = se.next;
}

template <typename T>
SElem<T>::SElem(SElem<T> * next, T num){
	this->next = next;
	this->num = num;
}

template <typename T>
T SElem<T>::getData(){
	return this->num;
}

template <typename T>
void SElem<T>::setData(T num){
	this->num = num;
}

template <typename T>
SElem<T> * SElem<T>::getNext(){
	return this->next;
}

template <typename T>
void SElem<T>::setNext(SElem<T> * nxt){
	this->next = nxt;
}


template <typename T>
SLStack<T>::SLStack(){
	count = 0;
	head = tail = NULL;
}

template <typename T>
SLStack<T>::~SLStack(){
	Clear();
}

template <typename T>
void SLStack<T>::delElem(){
	SElem<T> * tmp = head;
	head = head->getNext();
	delete tmp;
	count--;
}

template <typename T>
void SLStack<T>::Clear(){
	while (head != NULL)
		delElem();
}

template <typename T>
int SLStack<T>::getCount(){
	return count;
}

template <typename T>
SElem<T> * SLStack<T>::getElem(int index){
	if (index >= count || index < 0)
		return NULL;
	SElem<T> cElem = head;
	for (int i = 1; i < index; i++)
		cElem = cElem->getNext();
	return cElem;
}

template <typename T>
void SLStack<T>::Push(T num){
	SElem<T> * nElem = new SElem<T>();
	nElem->setData(num);
	if (head == NULL){
		nElem->setNext(NULL);
		head = tail = nElem;
	} else {
		nElem->setNext(head); 
		head = nElem;
	}
	count++;
}

template <typename T>
T SLStack<T>::Pop(){
	if (head == NULL)
		return NULL;
	T res = head->getData();
	delElem();
	return res;
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
	Clear();
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

template <typename T>
void TStack<T>::delElem(){
	TNode<T> * tn = root;
	root = root->getNext();
	root->setPrev(tn->getPrev());
	delete tn;
	count--;
}

template <typename T>
void TStack<T>::Clear(){
	int n = count;
	for (int i = 0; i < n; i++)
		delElem();
}