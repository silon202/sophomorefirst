#include <iostream>
#include <string>
using namespace std;
int soulution(string s)
{
    int x=s.length();
    int length=0;
    for(int i=x-1;i>=0;i--)
    {
        if (s[i]!=' ')
        length++;
        else
        break;
    }
    return length;
};
int main()
{
    string s;
    cin>>s;
    cout<<soulution(s);
    return 0;
}
