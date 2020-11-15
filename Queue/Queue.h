#pragma once
#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"
class Queue
{
public:
	Queue();
	~Queue();
	int reardata();
	int frontdata();
	bool IsEmpty();
	void pop();
	void push(int x);
	void CreateQueue(int n);
	void Clear();
private:
	int Length;
	node* rear;
	node* front;
};
#endif