#ifndef SINGLELIST_H
#define SINGLELIST_H
#include "node.h"
class SingleList
{
    public:
        SingleList();
        ~SingleList();
        void CreateList(int n);
        void ClearList();
        void Insert(int n,int x);
        void Delete(int n);
        int Locatex(int x);
        void ListTraverse();
    private:
        node *L;
};

#endif // SINGLELIST_H
