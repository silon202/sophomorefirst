#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
	Stack *m = new Stack;
	int n;
	cin >> n;
	m->CreateStack(n);
	cout<<m->top()<<endl;
	m->push(n+1);
	cout << m->top()<<endl;
	m->pop();
	cout << m->top() << endl;
	cout << m->IsEmpty()<<endl;
	m->ClearStack();
	cout << m->IsEmpty();
	return 0;
}