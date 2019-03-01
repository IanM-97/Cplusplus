// Class Exam 17/10/2018
// Name:
// Student No:

//Total : 100 marks
//Time  : 1 Hour
//Complete all methods
//Closed book exam. You must only access c++ environment.
//Upload this file to blackboard when complete.
#include "stdafx.h"
#include <iostream>

class Node {
public:
	Node *next;
	int data;
	Node(int d, Node * nextNode) :data(d), next(nextNode) {}

};
class List {

public:
	Node * head;
	List() :head(nullptr) {  }
	Node *pushFront(int d);
	void Print();


	int getNumberOfElements();
	void insertAfter(int dtoFind, int d);
	bool erase(int d);
	Node *findNthElementFromTheEnd(int n);

};
Node *  List::pushFront(int d) {

	Node *newNode = new Node(d, nullptr);
	if (head == nullptr)
	{
		head = newNode;
		return head;
	}
	newNode->next = head;
	head = newNode;
	return head;
}

void List::Print()
{
	std::cout << std::endl;
	for (Node *node = head; node != nullptr; node = node->next)
	{
		std::cout << node->data << "  ";
	}
	std::cout << std::endl;
}
//return the number of Elements 
//10 marks
int List::getNumberOfElements()
{
	int count = 0;
	for (Node *node = head; node != nullptr; node = node->next)
	{
		count++;
	}
	std::cout << "The number of elements is:";
	return count;
}
//insert a node with d as data after the first occurrence
//of a node with dtoFind as data
//20 marks
void List::insertAfter(int dtoFind, int d)
{
	Node *node = new Node(d, nullptr);
	Node *newnode = new Node(d, nullptr);

	for (Node *node = head; node->next != nullptr; node = node->next)
	{
		if (node->next->data  == dtoFind)
		{
			node->next->next = newnode;
		}
		node = node->next;
	}
	
}

//erase the first Node with Data d in the list .
//return true if erased
//return false if not
//20 Marks
bool List::erase(int d)
{
	Node *current = new Node(d, nullptr);
	
	if (current != NULL)
	{

		for (Node *node = head; node->next != nullptr; node = node->next)
		{
			if (node->next->data == d)
			{
				node->next = node->next->next;
				return true;
			}
			else
			{
			}
		}
		if (head->data == d)
		{
			head = NULL;
		}
	}
}

//if found return pointer to Node;
//if not found return nullptr
//30 marks for a working implementation 
//50 marks for working + only visit each node once.

Node *List::findNthElementFromTheEnd(int n)
{

	return nullptr;

}











int main()
{
	// Expected outputs are in comments
	List testList1;
	std::cout << std::endl;
	std::cout << testList1.getNumberOfElements() << std::endl;
	//0

	testList1.pushFront(3);
	std::cout << std::endl;
	std::cout << testList1.getNumberOfElements() << std::endl;;
	//1
	testList1.pushFront(2);
	testList1.pushFront(1);


	testList1.erase(2);
	testList1.Print();
	// 1 3
	testList1.erase(1);
	testList1.Print();
	// 3
	testList1.erase(3);
	testList1.Print();
	//
	testList1.erase(4);
	testList1.Print();
	//
	List testList2;
	testList2.pushFront(6);
	testList2.pushFront(5);
	testList2.pushFront(4);
	testList2.pushFront(3);
	testList2.pushFront(2);
	testList2.insertAfter(6, 7);

	testList2.Print();
	// 2 3 4 5 6 7

	testList2.insertAfter(10, 11);
	testList2.Print();
	// 2 3 4 5 6 7


	List testList3;
	testList3.pushFront(6);
	testList3.pushFront(5);
	testList3.pushFront(4);
	testList3.pushFront(3);
	testList3.pushFront(2);
	testList3.pushFront(1);

	Node * foundNode = nullptr;
	foundNode = testList3.findNthElementFromTheEnd(2);
	if (foundNode != nullptr)
	{
		std::cout << std::endl;
		std::cout << foundNode->data << std::endl;
		//5
	}
	foundNode = testList3.findNthElementFromTheEnd(7);
	if (foundNode == nullptr)
	{
		std::cout << std::endl;
		std::cout << "not found";
		//not enough elements

	}

	char wait;
	std::cin >> wait;
	return 0;
}