#include <iostream>
#include "list.h"
List::List()//��ʼ��//
{
    _List=new node;
    _List->date=0;
    _List->next=NULL;
    _ListLen=0;
}
//�������//
node::ClearList()
{
    node *p1=_List->next;
    while(p1->next!=NULL)
    {
        node *temp=p1->next;
        delete p1;
        p1=temp;
    }
    p1=NULL;
    _ListLen=0;
}

