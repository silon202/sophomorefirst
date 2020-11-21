#include <iostream>
#include "str.h"
using namespace std;
int main()
{
	Str x;
	Str y;
	char* m=new char;
	char* n=new char;
	cin >> m;
	cin >> n;
	x.Create(m);
	y.Create(n);
	cout << x.Compare(x, y)<< endl;
	cout << x.length<<endl;
	x.Connect(x, y);
	x.Find(1, 3);
	cout << x.Index(x, y, 2) << endl;
	return 0;
}

