#ifndef __SINGLELIST_H__
#define __SIGENLELIST_H__
#include "node.h"
class List
{
public:
    List();//��ʼ��//
    ~List();//����//
    void ClearList();//���//
    bool IsEmpty();//�жϿ�//
    bool Insert(int i,node *p);//����//
    bool Delete(int i,node *p);//ɾ��//
    bool FindPro(node *p1,node *p2);//ǰ��//
    bool FindNext(node *p1,node *p2);//���//
    int ListLen();//����//
private:
    int _ListLen;
    node *p;
};
#endif // LISL_H_
