#include <iostream>
#include "SingleList.h"
using namespace std;

List::List()//初始化//
{
    p=new node;
    p->data=0;
    p->next=NULL;
    _ListLen=0;
}
//清空链表//
void List::ClearList()
{
    node *currentnode=p->next;
    while(currentnode->next!=NULL)
    {
        node *temp=currentnode->next;
        delete currentnode;
        currentnode=temp;
    }
    currentnode=NULL;
    _ListLen=0;
}
//判断空//
bool List::IsEmpty()
{
    if(_ListLen==0)
        return true;
    else
        return false;
}
//长度//
int List::ListLen()
{
    return _ListLen;
}
//前驱//
bool List::FindPro(node *p1,node *p2)
{
    node *currentnode=p;
    node *currentnodebefore=NULL;
    while(currentnode->next!=NULL)
    {
        currentnodebefore=currentnode;
        currentnode=currentnode->next;
        if(currentnode->data==p1->data)
        {
            p2->data=currentnodebefore->data;
            return true;
        }
    }
    return false;
}
//后继//
bool List::FindNext(node *p1,node *p2)
{
    node *currentnode=p;
    node *currentnodebefore=NULL;
    while(currentnode->next!=NULL)
    {
        currentnodebefore=currentnode;
        currentnode=currentnode->next;
        if(currentnodebefore->data==p1->data)
        {
            p2->data=currentnodebefore->data;
            return true;
        }
    }
    return false;
}
//插入//
bool List::Insert(int i,node *p)
{
    if(i<0||i>_ListLen)
        return false;
    else
    {
        node *currentnode=p;
        for(int k=0;k<i;k++)
        {
            currentnode=currentnode->next;
        }
        node *newnode=new node;
        newnode->data=p->data;
        newnode->next=currentnode->next;
        currentnode->next=newnode;
        _ListLen++;
        return true;
    }
}
//删除//
bool List::Delete(int i,node *p)
{
    if(IsEmpty())
    {
        return false;
    }
    else
    {
        if(i<0||i>_ListLen)
        {
            return false;
        }
        else
        {
            node *currentnode=p;
            node *currentnodebefore=NULL;
            for(int k=0;k<=i;k++)
        {
            currentnodebefore=currentnode;
            currentnode=currentnode->next;
        }
        currentnodebefore->next=currentnode->next;
        p->data=currentnode->data;
        _ListLen--;
        delete currentnode;
        currentnode=NULL;
        return false;
        }
    }
}
