#pragma once
#include<iostream>
#include"DblLinkedList.h"

using namespace std;

template <class t>
class MyQueue
{
private:
	DblLinkedList<t> linkedList;

public:
	
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
		return linkedList.GetNodeValueByIndex(Size() - 1);
	}
	
	t GetItemOfIndex(int index) {
		return linkedList.GetNodeValueByIndex(index);
	}

	void Reverse() {
		linkedList.Reverse();
	}

	void UpdateItemOfIndex(int index, t value) {
		linkedList.UpdateNode(index, value);
	}

	void InsertAfter(int index, t value) {
		linkedList.InsertAfter(index, value);
	}

	void InsertAtFront(t value) {
		linkedList.InsertAtBeginning(value);
	}
	void InsertAtBack(t value) {
		linkedList.InsertAtEnd(value);
	}

	void Clear() {
		linkedList.Clear();
	}
};

