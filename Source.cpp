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

	return 0;
}