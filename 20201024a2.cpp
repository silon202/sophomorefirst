#include <iostream>
#include "list.h"
using namespace std;
//�����Ƿ�Ϊ�ձ�//
node::isempty(List L)
{
    return p->next==NULL;
}
//���Ե�ǰλ���Ƿ�������ĩβ//
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
//findpreviousѰ��ǰ��Ԫ//
node::findprevious(int x,List L)
{
    Position p;
    p=L;
    while(p->next!=NULL&&p->next->element!=x)
        return p;
}
//ɾ���б���ĳ��Ԫ��//
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
//����//
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
//ɾ����//
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

