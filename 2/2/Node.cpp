#include "Node.h"

Node::Node(){
	num = 0;
	next = prev = NULL;
}

Node::Node(int num){
	this->num = num;
	prev = next = NULL;
}

Node::Node(const Node & n){
	this->num = n.num;
	this->next = n.next;
	this->prev = n.prev;
}

Node * Node::getNext(){
	return this->next;
}

Node * Node::getPrev(){
	return this->prev;
}

int Node::getData(){
	return num;
}

void Node::setNext(Node * next){
	this->next = next;
}

void Node::setPrev(Node * prev){
	this->prev = prev;
}

void Node::setData(int num){
	this->num = num;
}