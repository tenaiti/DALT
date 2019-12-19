#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP
#include "LinkedList.h"

template <class Data>
Node<Data>::Node(Data dataIn)
{
	data = dataIn;
	next = NULL;
}

template <class Data>
Data Node<Data>::getData()
{
	return Data;
}

template <class Data>
List<Data>::List()
{
	head = NULL;
	length = 0;
}

template <class Data>
List<Data>::~List()
{
	if (!isEmpty())
	{
		Node<Data>* currentNode = head;
		Node<Data>* temp;

		while (currentNode != 0)
		{
			temp = currentNode;
			currentNode = currentNode->next;
		//	delete temp;
		}
	}
}

template <class Data>
Data& List<Data>::operator[](int index)
{
	Node<Data>* temp = this->head;
	while (index && temp->next != NULL)
	{
		temp = temp->next;
		index--;
	}
	return temp->data;
};

template <class Data>
bool List<Data>::isEmpty()
{
	if (head == NULL)
		return 1;
	else
		return 0;
}

template <class Data>
void List<Data>::insertFirst(const Data& dataIn)
{
	if (isEmpty())
	{
		Node<Data>* newNode = new Node<Data>(dataIn);
		head = newNode;
	}
	else
	{
		Node<Data>* newNode = new Node<Data>(dataIn);
		newNode->next = head;
		head = newNode;
	}
	length++;
};

template <class Data>
void List<Data>::deleteFirst() {
	Node<Data>* temp = head;
	head = head->next;
}

template <class Data>
void List<Data>::deletePosition(int position) {
	if (position == 0)
		deleteFirst();
	else {
		int count = 0;
		Node<Data>* temp, * p;
		temp = head;
		while (count != position - 1) {
			count++;
			temp = temp->next;
		}
		p = temp->next;
		p = p->next;
		temp->next = p;
	}
	length--;
}
#endif 