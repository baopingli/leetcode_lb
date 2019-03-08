#include<iostream>
#include<vector>
using namespace std;
//这种方法是错误的
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int frontindex=0;
        int backindex=0;
        for(int i=0;i<n;i++)
        {

            if(nums[i]>nums[i+1])
            {
                frontindex=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<nums[i-1])
            {
                backindex=i;
                break;
            }
        }

        return backindex-frontindex+1;

    }
};
//参考的其他的方法，新建一个数组和原来的一致然后进行排序然后和原数组进行比较然后记录前后的位置然后
class Solutio
{
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp=nums;
        int startindex=0;
        int endindex=0;
        int n=nums.size();
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=temp[i])
            {
                startindex=i;
                break;
            }

        }
        for(int j=n-1;j>=0;j--)
        {

            if(nums[j]!=temp[j])
            {
                endindex=j;
                break;
            }
        }
        if(endindex==0&&startindex==0)
        {
            return 0;
        }
        return endindex-startindex+1;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
