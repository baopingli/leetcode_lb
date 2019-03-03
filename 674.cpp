#include<iostream>
#include<vector>
using namespace std;
//这里的递增没有说是等长的递增序列，所以说考虑多了，只使用一个迭代就可以了。
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {

            if(i==0||nums[i-1]<nums[i])
            {
                res=max(res,++cnt);
            }
            else
                cnt=1;
        }
        return res;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
