#include <iostream>
#include <string>
#include <vector>
using namespace std;
int solution(vector<int> s)
{
    int n=s.size();
    vector<int>arr(n*n);
    int jishu=0;
    int temp;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            int x=0;
            for(int k=j;k<=i+j;k++)
            {
                x=x+s[k];
            }
            arr[jishu]=x;
            jishu++;
        }

    }
    for(int i=0;i<jishu-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
        }
        else
            continue;
    }
    return arr[jishu-1];
}
int main()
{
    int x;
    cin>>x;
    vector<int> nums(x);
    for(int i=0;i<x;i++)
    {
        cin>>nums[i];
    }
    cout<<solution(nums);
    return 0;
}
