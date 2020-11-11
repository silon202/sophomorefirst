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
    m->Insert(3, 3);
    m->ListTraverse();
    m->Delete(3);
    m->ListTraverse();
    m->Locatex(5);
    m->CreateList();
    return 0;
}