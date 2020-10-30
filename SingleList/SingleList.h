#ifndef __SINGLELIST_H__
#define __SIGENLELIST_H__
#include "node.h"
class List
{
public:
    List();//初始化//
    ~List();//销毁//
    void ClearList();//清空//
    bool IsEmpty();//判断空//
    bool Insert(int i,node *p);//插入//
    bool Delete(int i,node *p);//删除//
    bool FindPro(node *p1,node *p2);//前驱//
    bool FindNext(node *p1,node *p2);//后继//
    int ListLen();//长度//
private:
    int _ListLen;
    node *p;
};
#endif // LISL_H_
