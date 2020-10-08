#include <iostream>
#include <string>
using namespace std;
int geshu(string s)
{
    int x=s.length();
    int y=0;
    for(int i=0;i<=x-1;i++)
    {
        if(s[i]!=' '&&s[i]!='.'&&s[i]!='?')
            y++;
        else
            continue;
    }
    return y;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<geshu(s);
    return 0;
}
