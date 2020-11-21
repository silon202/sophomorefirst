#include <iostream>
#include "str.h"
using namespace std;
Str::Str()
{
	str = NULL;
	length = 0;
}
Str::~Str()
{
	Clear();
}
void Str::Create(char* m)
{
	str = m;
	while (*m)
	{
		length++;
		m++;
	}
}
int Str::Compare(Str x,Str y)
{
	int i = 0;
	while (i < x.length && i < y.length)
	{
		if (x.str[i] > y.str[i])
			return 1;
		else if (x.str[i] < y.str[i])
			return -1;
		i++;
	}
	return 0;
}
int Str::Find(int x1, int x2)
{
	if (x2 - x1 > length)
	{
		cout << "error" << endl;
		return -1;
	}

	Str temp;
	temp.str=new char;
	int i = x1-1;
	int j = 0;
	while (i <=x2-1)
	{
		temp.str[j] = str[i];
		j++;
		i++;
	}
	temp.length = x2 - x1;
	temp.str[j] = '\0';
	cout << temp.str << endl;
	return 0;
}
void Str::Connect(Str x, Str y)
{
	Str temp;
	temp.str = new char;
	int i = 0;
	while (i < x.length)
	{
		temp.str[i] = x.str[i];
		i++;
	}
	int j = 0;
	while (j < y.length)
	{
		temp.str[i + j] = y.str[j];
		j++;
	}
	temp.length = x.length + y.length;
	temp.str[i + j] = '\0';
	cout << temp.str << endl;
}
void Str::Clear()
{
	str = NULL;
	length = 0;
}
void Str::Next(Str t, int* next)
{
	int i, j;
	i = 1;
	j = 0;
	next[1] = 0;
	while (i < t.length)
	{
		if (j == 0 || t.str[i] == t.str[j])
		{
			i++;
			j++;
			//if (t.str[i] = t.str[j])
				//next[i] = j;
			//else
				next[i] = next[j];
		}
		else
			j = next[j];
	}
}
int Str::Index(Str x, Str y, int p)
{
	int i = p;
	int j = 1;
	int next[100];
	Next(y, next);
	while (i <= x.length&& j <= y.length)
	{
		if (j == 0 || x.str[i] == y.str[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];
		}
	}
	if (j > y.length)
		return i - y.length;
	else
		return 0;
}