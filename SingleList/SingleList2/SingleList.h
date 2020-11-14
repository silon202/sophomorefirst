#pragma once
#ifndef SINGLELIST_H_INCLUDED
#define SINGLELIST_H_INCLUDED
#include "node.h"
class SingleList
{
public:
    SingleList();
    ~SingleList();
    void CreateList(int n);
    void ClearList();
    bool Insert(int n, int x);
    bool Delete(int n);
    int Locatex(int x);
    void ListTraverse();
private:
    node* L;
    int Length;
};
#endif // SINGLELIST_H
