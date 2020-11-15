#include <iostream>
#include "SingleList.h"
using namespace std;
int main()
{

    SingleList* m = new SingleList;
    int n;
    cin >> n;
    m->CreateList(n);
    m->ListTraverse();
    m->Insert(n+1, n+1);
    m->ListTraverse();
    m->Delete(n+1);
    m->ListTraverse();
    m->Locatex(2);
    m->ClearList();
    return 0;
}