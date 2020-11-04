#include <iostream>
#include "SingleList.h"
using namespace std;
SingleList::SingleList()
{
    L=new node;
    L->data=0;
    L->next=NULL;
}
SingleList::~SingleList()
{
    ClearList();
    delete L;
    L=NULL;
}
void SingleList::CreateList(int n)
{
    node *s;
    node *q;
    q=L;
    q=new node;
    cout<<"ÇëÊäÈë";
    for(int i=1;i<=n;i++)
    {
        s=new node;
        cin>>s->data;
        q->next=s;
        q=s;
    }
    q->next=NULL;
}
void SingleList::ClearList()
{
    node *s;
    node *q;
    q=L;
    s=q->next;
    node *p;
    while(s->next!=NULL)
    {
        p=s->next;
        delete s;
        s=p;
    }
    q->next=NULL;
}
void SingleList::Insert(int n,int x)
{
    node *s;
    s=L;
    int i=1;
    while(i<n)
    {
        s=s->next;
        i++;
    }
    node *p;
    p=new node;
    p->data=x;
    p->next=s->next;
    s->next=p;
}
void SingleList::Delete(int n)
{
    node *s;
    s=L;
    int i=1;
    while(i<n)
    {
        s=s->next;
        i++;
    }
    node *p;
    p=s->next;
    s->next=p->next;
    delete p;
}
int SingleList::Locatex(int x)
{
    int i=0;
    node *q;
    q=L;
    q=q->next;
    while(q->next!=NULL)
    {
        if(q->data=x)
            return i;
        else
            q=q->next;
            i++;
    }
    return 0;
}
void SingleList::ListTraverse()
{
    node *q;
    q=L;
    while(q->next!=NULL)
    {
        q=q->next;
        cout<<q->data<<" ";
    }
}

