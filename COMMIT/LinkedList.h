#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
//#include <string>
using namespace std;
template <class Data>
class List;
template <class Data>
class Node;

template <class Data>
class Node
{
private:
	friend class List<Data>;
	Node* next;
	Data data;
public:
	Node(Data);
	Data getData();
};

template <class Data>
class List
{
private:
	Node<Data>* head;
	bool isEmpty();
public:
	int length;
	List();
	~List();
	Data& operator[](int);
	void insertFirst(const Data&);
	void deleteFirst();
	void deletePosition(int);
};
#include "LinkedList.cpp"
#endif