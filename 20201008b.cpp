#include <iostream>
#include <string>
using namespace std;
void reverse(string &s)
{
    int x=s.length();
    char temp;
    for(int i=0;i<=x/2-1;i++)
    {
        temp=s[i];
        s[i]=s[x-1-i];
        s[x-1-i]=temp;
    }
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s);
    cout<<s;
    return 0;
}
