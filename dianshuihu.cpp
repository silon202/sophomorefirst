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
        cout<<"��ˮ";
    };
    char jingbao(){cout<<"ˮ�Ѿ��տ�";
};
class baowenhu:public dianshuihu,public
{
    char baowen(bool y)
    {
        if(y)
        cout<<"����";
    };
};
