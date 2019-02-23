//计算最大连续1的个数
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        if(n=1&&nums[0]==1)
            return 1;
        if(n=1)
            return 0;
        int index=1;
        int temp=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==1&&nums[i+1]==1)
            {
                index++;
            }
            if(nums[i]==1&&nums[i+1]==0)
            {
                if(temp<index)
                    temp=index;
                index=1;
            }
        }

        return temp;
    }
};
class Soultion1{
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        if(n==1&&nums[0]==1)
            return 1;
        if(n==1)
            return 0;
        int counter=0;
        int res=0;
       for(int i=0;i<n;i++)
       {
           if(nums[i]==1)
           {
               counter++;
               if(res<counter)
                res=counter;
           }
           else
            counter=0;

       }
       return res;
    }
};
int main()
{
    vector<int> x={1,0,1,1,0,1};
    Solution s;
    int res=s.findMaxConsecutiveOnes(x);
    cout<<res<<endl;
    //cout<<"hello world"<<endl;
    return 0;
}
