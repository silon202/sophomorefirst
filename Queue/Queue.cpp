#include <iostream>
#include "Queue.h"
using namespace std;
Queue::Queue()
{
	Length = 0;
	front = NULL;
	rear = NULL;
}
Queue::~Queue()
{
	Clear();
}
void Queue::CreateQueue(int n)
{
	int x;
	if (n < 1)
		cout << "error"<<endl;
	else
	{
		cout << "请输入 ";
		cin >> x;
		front = new node;
		front->data = x;
		rear = front;
		Length = 1;
	}
	if (n > 1)
	{
		for (int i = 0;i < n - 1;i++)
		{
			cin >> x;
			rear->next = new node;
			rear = rear->next;
			rear->data = x;
			Length++;
		}
	}
}
int Queue::reardata()
{
		return rear->data;
}
int Queue::frontdata()
{
		return front->data;
}
bool Queue::IsEmpty()
{
	if (Length == 0)
		return true;
	else
		return false;
}
void Queue::Clear()
{
	while (front != NULL)
	{
		node* p = front;
		front = front->next;
		delete p;
	}
	Length = 0;
}
void Queue::push(int x)
{
	rear->next = new node;
	rear = rear->next;
	rear->data = x;
	Length++;
}
void Queue::pop()
{
	if (IsEmpty())
		cout << "error" << endl;
	else if (rear == front)
	{
		delete rear;
		front = rear = NULL;
		Length=0;
	}
	else
	{
		node* p=front;
		front=front->next;
		delete p;
		Length--;
	}
}