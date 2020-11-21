#ifndef STR_H
#define STR_H
class Str
{
public:
	Str();
	~Str();
	void Create(char *m);
	int Compare(Str x, Str y);
	void Connect(Str x, Str y);
	int Find(int x1,int x2);
	void Clear();
	int Index(Str x,Str y, int p);
	void Next(Str t,int *next);
	char* str;
	int length = 0;
};
#endif