#include "bitree.h"
#include "queue"
#include "stack"
#include "vector"
#include <iostream>
using namespace std;
binode *bitree::create(string &s,int &pos)
{
     ++pos;
    binode * t;
    if((unsigned)pos>=s.size())
        return NULL;
    else{
        if(s[pos]=='#')
            t=NULL;
        else{
            t=new binode;
            t->data=s[pos];
            t->lchild=create(s,pos);
            t->rchild=create(s,pos);
            }
        return t;
        }
}
void bitree::createbitree(string s){
    int pos = -1;
    root=create(s,pos);
}
void bitree::preorder(){
    pre_order(root);
    cout<<endl;
}
void bitree::pre_order(binode * t){
    if(t!=NULL){
        cout<<t->data<<' ';
        pre_order(t->lchild);
        pre_order(t->rchild);
    }
}
void bitree::inorder(){
    in_order(root);
    cout<<endl;
}
void bitree::in_order(binode *t){
    if(t!=NULL){
        in_order(t->lchild);
        cout<<t->data<<' ';
        in_order(t->rchild);
    }
}
void bitree::postorder(){
    post_order(root);
    cout<<endl;
}
void bitree::post_order(binode *t){
    if(t!=NULL){
        post_order(t->lchild);
        post_order(t->rchild);
        cout<<t->data<<' ';
    }
}
