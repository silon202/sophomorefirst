#include <iostream>
#include "bitree.h"
using namespace std;

int main()
{
    bitree a;
    string s;
    s="ABD##E#F##C##";
    a.createbitree(s);
    cout<<"前序遍历："<<endl;
    a.preorder();
    cout<<"中序遍历："<<endl;
    a.inorder();
    cout<<"后序遍历："<<endl;
    a.postorder();
    return 0;
}
