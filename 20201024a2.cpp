#include <iostream>
#include "list.h"
using namespace std;
//测试是否为空表//
node::isempty(List L)
{
    return p->next==NULL;
}
//测试当前位置是否是链表末尾//
node::islast(Position p,List L)
{
    return p->nest==NULL;
}
//find//
node::find(int x,List L)
{
    Position p;
    p=L->next;
    while(p!=NULL&&p->element!=x)
        p=p->next;
    return p;
}
//findprevious寻找前驱元//
node::findprevious(int x,List L)
{
    Position p;
    p=L;
    while(p->next!=NULL&&p->next->element!=x)
        return p;
}
//删除列表中某个元素//
node::Delete(int x,List L)
{
    Position p,tempcell;
    p=findprevious(x,L);
    if(!islast(p,L))
    {
        tempcell=p->next;
        p->next=tempcell->next;
        free(tempcell);
    }
}
//插入//
node::Insert(int x,List L,Position p)
{
    Position tempcell;
    tempcell=malloc(sizeof(struct node));
    if(tempcell==NULL)
        cout<<"out of peace";
    else
        tempcell->element=x;
    tempcell->next=p->next;
    p->next=tempcell;
}
//删除表//
node::DeleteList(List L)
{
    Position p,temp;
    p=L->next;
    L->next=NULL;
    while(p!=NULL)
    {
        temp=p->next;
        free(p);
        p=temp;
    }
}

