#ifndef LISL_H_
#define LIST_H_
#include "node.h"
class List
{
public:
    List;//��ʼ��//
    ~List;//����//
    void ClearList();//���//
    bool IsEmpty();//�жϿ�//
    void Insert(int i,node *p);//����//
    void Delete(int i,node *p);//ɾ��//
    bool FindPro(node *p1,node *p2);//ǰ��//
    bool FindNext(node *p1,node *p2);//���//
    int ListLen();//����//
private:
    int _ListLen;
    node *_p;
};
#endif // LISL_H_
