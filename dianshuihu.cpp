#include <iostream>
#include <string>
using namespace std;
struct hugai
{
    double r=5;
};
struct huti
{
    double m=500;
    string xingzhuang="yuanxing";
};
class dianshuihu
{
public:
    struct hugai gai;
    struct huti ti;
    char yanse="baise";
    string shaoshui(bool x)
    {
        if(x)
        cout<<"烧水";
    };
    char jingbao(){cout<<"水已经烧开";
};
class baowenhu:public dianshuihu,public
{
    char baowen(bool y)
    {
        if(y)
        cout<<"保温";
    };
};
