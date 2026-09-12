#include<iostream>
#include"MyQueue.h"
using namespace std;

int main() {
	
	MyQueue<int> myQueue;

	myQueue.Push(10);
	myQueue.Push(20);
	myQueue.Push(30);
	myQueue.Push(40);

	myQueue.Print();

	myQueue.Pop();

	cout << endl;
	myQueue.Print();

	cout << "\n the size of the queue is : " << myQueue.Size();
	cout << "\n the front of the queue is : " << myQueue.Front();
	cout << "\n the back of the queue is : " << myQueue.Back();

	cout << "\n=========\n";

	cout << "item of index (2) " << myQueue.GetItemOfIndex(2)<<endl;

	cout << "queue after reverse \n";
	myQueue.Reverse();
	myQueue.Print();

	cout << "\nqueue after updating item of index 2 \n";
	myQueue.UpdateItemOfIndex(2, 8000);
	myQueue.Print();

	cout << "\nqueue after inserting 700 after index 2 \n";
	myQueue.InsertAfter(2, 700);
	myQueue.Print();

	cout << "\n queue after inserting 888 at front \n";
	myQueue.InsertAtFront(888);
	myQueue.Print();

	cout << "\n queue after inserting 999 at back \n";
	myQueue.InsertAtBack(999);
	myQueue.Print();

	cout << "\n queue after clear \n";
	myQueue.Clear();
	myQueue.Print();
	return 0;
}