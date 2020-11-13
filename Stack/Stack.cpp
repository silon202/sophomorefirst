#include <iostream>
#include "Stack.h"
using namespace std;
Stack::Stack()
{
	Top = NULL;
	count = 0;
}
Stack::~Stack()
{
	ClearStack();
}
void Stack::CreateStack(int n)
{
	int x;
	cout << "请输入";
	for (int i = 0;i < n;i++)
	{
		cin >> x;
		push(x);
	}
}
void Stack::push(int x)
{
	node *q;
	q = new node;
	q->data = x;
	q->next = Top;
	Top = q;
	count++;
}
bool Stack::pop()
{
	if (Top==NULL)
	{
		cout << "error";
		return false;
	}
	else
	{
		node* q = Top;
		Top = Top->next;
		delete q;
		count--;
		return true;
	}
}
int Stack::top()
{
	if (Top==NULL)
		cout << "error";
	else
		return Top->data;
}
bool Stack::IsEmpty()
{
	if (Top == NULL)
		return true;
	else
		return false;
}
bool Stack::ClearStack()
{
	if (Top==NULL)
	{
		cout << "error";
		return false;
	}
	while (Top != NULL)
	{
		node* q = Top;
		Top = Top->next;
		delete q;
		count--;
	}
	return true;
}
