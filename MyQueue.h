#pragma once
#include<iostream>
#include"DblLinkedList.h"

using namespace std;

template <class t>
class MyQueue
{
	public:
	DblLinkedList<t> linkedList;
	
	
	void Push(t value) {
		linkedList.InsertAtEnd(value);
	}

	void Pop() {
		linkedList.DeleteFirstNode();
	}

	void Print() {
		linkedList.PrintLinkedList();
	}

	int Size() {
		return linkedList.Size();
	}

	t Front() {
		return linkedList.GetNodeValueByIndex(0);
	}

	t Back() {
		return linkedList.GetNodeValueByIndex(linkedList.Size() - 1);
	}

};

