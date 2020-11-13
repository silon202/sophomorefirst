#pragma once
#ifndef NODE_H
#define NODE_H
class node
{
public:
	int data;
	node* next;
	node() { data = 0;next = NULL; }
};
#endif