#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
class node
{
public:
    int data;
    node *next;
    node(){data=0;next=NULL;};
};
#endif // NODE_H_INCLUDED
