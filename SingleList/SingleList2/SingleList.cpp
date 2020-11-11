#include <iostream>
#include "SingleList.h"
using namespace std;
SingleList::SingleList()
{
    L = new node;
    Length = 0;
}
SingleList::~SingleList()
{
    ClearList();
    delete L;
    L = NULL;
}
void SingleList::CreateList(int n)
{
    Length = n;
    node* s;
    node* q;
    q = L;
    cout << "input";
    for (int i = 1;i <= n;i++)
    {
        s = new node;
        cin >> s->data;
        q->next = s;
        q = s;
    }
    q->next = NULL;
}
void SingleList::ClearList()
{
    node* s;
    node* q;
    q = L;
    s = q->next;
    node* p;
    while (s->next != NULL)
    {
        p = s->next;
        delete s;
        s = p;
    }
    delete s;
}
bool SingleList::Insert(int n, int x)
{
    if (n > Length || n < 1)
        return false;
    else
    {
        node* s;
        s = L;
        int i = 1;
        while (i < n)
        {
            s = s->next;
            i++;
        }
        node* p;
        p = new node;
        p->data = x;
        p->next = s->next;
        s->next = p;
    }
    return true;
}
bool SingleList::Delete(int n)
{
    if (n > Length || n < 1)
        return false;
    else
    {
        node* s;
        s = L;
        int i = 1;
        while (i < n)
        {
            s = s->next;
            i++;
        }
        node* p;
        p = s->next;
        if (n == Length)
        {
            delete p;
            p = NULL;
            return true;
        }
        else
        {
            s->next = p->next;
            delete p;
            return true;
        }
    }
}
bool SingleList::Locatex(int x)
{
    int i = 1;
    node* q;
    q = L;
    q = q->next;
    while (q->next != NULL)
    {
        if (q->data == x)
        {
            cout << i;
            return true;
         }
        else
        {
            q = q->next;
            i++;
         }
    }
    if (q->data == x)
    {
        cout << Length;
        return true;
    }
    else
        return false;
}
void SingleList::ListTraverse()
{
    node* q;
    q = L;
    while (q->next != NULL)
    {
        q = q->next;
        cout << q->data << " ";
    }
    cout << endl;
}
