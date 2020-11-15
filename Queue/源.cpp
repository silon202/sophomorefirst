#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
	Queue* m = new Queue;
	int y;
	cin>>y;
	m->CreateQueue(y);
	cout<<m->frontdata()<<endl;
	cout<<m->reardata()<<endl;
	m->push(y+1);
	cout<< m->reardata()<< endl;
	m->pop();
	cout<< m->frontdata()<< endl;
	cout << m->IsEmpty()<<endl;
	m->Clear();
	cout << m->IsEmpty();
	return 0;
}