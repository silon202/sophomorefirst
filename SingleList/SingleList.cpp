#include <iostream>
#include "SingleList.h"
using namespace std;
List::List()//初始化//
{
    p=new node;
    p->date=0;
    p->next=NULL;
    _ListLen=0;
}
//清空链表//
List::ClearList()
{
    node *p=_List->next;
    while(p->next!=NULL)
    {
        node *temp=p->next;
        delete p;
        p=temp;
    }
    p=NULL;
    _ListLen=0;
}
//判断空//
List::IsEmpty()
{
    if(_ListLen==0)
        return true;
    else
        return false;
}
//长度//
List::ListLen()
{
    return _ListLen;
}
//前驱//
List::FindPro(node *p1,node ,*p2)
{
    node *currentnode=_List;
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
List::FindNext(node *p1,node ,*p2)
{
    node *currentnode=_List;
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
List::Insert(int i,node *p)
{
    if(i<0||i>_List)
        return false;
    else
    {
        node *currentnode=_List;
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
List::Delete(int i,node *p)
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
                    node *currentnode=_List;
        node *currentbefore=NULL;
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
