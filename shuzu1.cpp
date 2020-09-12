#include <iostream>
using namespace std;
int main()
{
    int x,y=0;
    cin>>x;
    int z=x;
    if(x<10)
    {
        int a[1];
        a[0]=x;
        cout<<a[0];
    }
    else if(x>=10)
    {
        while(x!=0)
        {
            x=x/10;
            y++;
        }
        int b[y];
        for(int i=0;i<y;i++)
        {
            b[i]=z%10;
            z=z/10;
            cout<<b[i];

        }
    }
    return 0;
}
