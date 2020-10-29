#ifndef _LIST_H
#define _LIST_H
typedef struct node *ptrtonode;
typedef ptrtonode List;
typedef ptrtonode Position;
struct node
{
public:
    List makeempty(List L);
    int isempty(List L);
    int islast(Position p,List L);
    Position find(int x,List L);
    void Delete(int x,List L);
    Position findprevious(int x,List L);
    void Insert(int x,List L,Position p);
    void DeleteList(List L);
};

#endif
