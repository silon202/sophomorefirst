#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;
class Triangle
{
private:
    double a_;
    double b_;
    double c_;
public:
    Triangle(double a,double b,double c);
    void showTriangle(double a,double b,double c);
    int judgeTriangle(double a,double b,double c);
    double getArea(double a,double b,double c);
};
Triangle::Triangle(double a,double b,double c)
{
    a=0;
    b=0;
    c=0;
}
void Triangle::showTriangle(double a,double b,double c)
{  cout<<fixed;
    cout<<setprecision(2)<<a<<" "<<b<<" "<<c<<" ";
}
int Triangle::judgeTriangle(double a,double b,double c)
{
    if(a==b&&a==c) return 1;
    else if(a==b&&a!=c||b==c&&b!=a||a==c&&b!=c)
        return 2;
    else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        return 3;
    else return 4;
}
double Triangle::getArea(double a,double b,double c)
{
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    Triangle ans(a,b,c);
    ans.showTriangle(a,b,c);
    cout<<fixed;
    cout<<setprecision(2)<<ans.judgeTriangle(a,b,c);
    cout<<setprecision(2)<<" "<<ans.getArea(a,b,c);
    return 0;
}
