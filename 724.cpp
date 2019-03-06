#include<iostream>
#include<vector>
using namespace std;
//寻找数组的中心索引，使得左右两边的数加起来相等。
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return -1;
        if(n==1)
            return 0;
        int l=0;
        int r=0;
        for(int i=0;i<n;i++)
        {
            r+=nums[i];
        }
        r=r-nums[0];
        if(r==l)
            return 0;
        for(int i=1;i<n;i++)
        {
            l+=nums[i-1];
            r-=nums[i];
            if(l==r)
                return i;
        }
        return -1;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
