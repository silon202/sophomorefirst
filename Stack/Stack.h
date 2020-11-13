#pragma once
#ifndef STACK_H
#define STACK_H
#include "node.h"
class Stack
{
public:
	Stack();
	~Stack();
	void push(int x);
	bool pop();
	int top();
	bool IsEmpty();
	bool ClearStack();
	void CreateStack(int n);
private:
	int count;
	node* Top;
};
#endif