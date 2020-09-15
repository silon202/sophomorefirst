#include <iostream>

using namespace std;

int main()
{
 long int x;
 cin>>x;
 if(x<0)
 cout<<"false";
 else
 {

    int y=0;
    int z=x;
    while(x!=0)
        {
        y=y*10+x%10;
        x=x/10;
        }
    if(z==y)
        cout<<"true";
    else
        cout<<"false";
 }
}
