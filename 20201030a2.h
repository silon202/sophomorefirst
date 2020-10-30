#ifndef LISL_H_
#define LIST_H_
#include "node.h"
class List
{
public:
    List;//初始化//
    ~List;//销毁//
    void ClearList();//清空//
    bool IsEmpty();//判断空//
    void Insert(int i,node *p);//插入//
    void Delete(int i,node *p);//删除//
    bool FindPro(node *p1,node *p2);//前驱//
    bool FindNext(node *p1,node *p2);//后继//
    int ListLen();//长度//
private:
    int _ListLen;
    node *_p;
};
#endif // LISL_H_
