#include <iostream>
#include "bitree.h"
using namespace std;

int main()
{
    bitree a;
    string s;
    s="ABD##E#F##C##";
    a.createbitree(s);
    cout<<"ǰ�������"<<endl;
    a.preorder();
    cout<<"���������"<<endl;
    a.inorder();
    cout<<"���������"<<endl;
    a.postorder();
    return 0;
}
