#include <iostream>
#include "SimpleList.h"
#include "Node.h"

using namespace std;

/// <summary>
/// Destructor
/// </summary>
SimpleList::~SimpleList()
{
	Node* temp;
	while (head != NULL)
	{
		temp = head;
		head = temp->next;
//		delete temp;
	}
}

void SimpleList::QueueItem(int newValue)
{
	Node* temp = new Node;
	temp->value = newValue;
	temp->next = NULL;

	if (head == NULL) // Empty List
	{
		head = tail = temp;
	}
	else // Full
	{
		tail->next = temp;
		tail = temp;
	}
	delete temp;
	cout << "Queued Item" << endl;
}

int SimpleList::DequeueItem()
{
	// Is empty?
	if (head == NULL)
		return -1;

	Node* temp = head;
	head = temp->next;

	// Set the new head to maintain the list
	// even if the next item is NULL (empty)
	if (head == NULL)
		tail == NULL;

	int nReturn = temp->value;
	delete temp;

	cout << "Dequeued node" << endl;
	return nReturn;
}

void SimpleList::DisplayList()
{
	if (head == NULL)
		return;
	Node* temp;
	temp = head;
	while (1)
	{
		cout << temp->value << endl;
		if (temp == tail)
			return;
		temp = temp->next; 
	}
	delete temp;
}

void SimpleList::Push(int value)
{
	Node* temp = new Node;
	temp->value = value;
	temp->next = head;
	if (head == NULL) // Empty List
		head = tail = temp;
	else
		head->next = temp;
	head = temp;
	
	//delete temp;

	cout << "Pushed Item" << endl;
}

int SimpleList::Pop()
{
	// Is empty?
	if (head == NULL)
		return -1;

	Node* temp = head;
	head = temp->next;


	head = temp->next;

	// Set the new head to maintain the list
	// even if the next item is NULL (empty)
	if (head == NULL)
		tail == NULL;

	int nReturn = temp->value;

	cout << "Popped Item" << endl;
	return nReturn;
}