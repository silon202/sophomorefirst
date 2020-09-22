#ifndef BITREE_H_INCLUDED
#define BITREE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class binode
{
    char data;
    struct binode *lchild,*rchild;
};
class bitree
{
    private:
        binode *root;
        void pre_order(binode *t);
        void in_order(binode *t);
        binode* create(string &s ,int&pos);
    public:
        bitree(){root=NULL;}
        void createbitree(string s);
        void preorder();
        void inorder();
        void postorder();
};

#endif // BITREE_H_INCLUDED
