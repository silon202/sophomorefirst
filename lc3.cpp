#include <iostream>

using namespace std;

int main()
{
int x;
int y=0;
cin>>x;
while(x!=0)
    {
    y=y*10+x%10;
    x=x/10;
    }
cout<<y;
return 0;
}
