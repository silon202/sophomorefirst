#include <iostream>
#include <vector>
using namespace std;

int main()
{
int n,target;
cin>>n>>target;
vector<int>nums(n);
for(int i=0;i<n;i++)
    cin>>nums[i];
for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
        {
        if(i!=j&&(nums[i]+nums[j]==target))
                cout<<"["<<i<<","<<j<<"]"<<" ";
        else
            continue;
        }
    }
    return 0;
}
