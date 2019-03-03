#include<iostream>
#include<vector>
using namespace std;
//我的方法效率不高
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> temp=nums;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[n-1]>nums[n-2]*2)
        {

            for(int i=0;i<n;i++)
            {

                if(temp[i]==nums[n-1])
                    return i;
            }
        }
        else
            return -1;
        return 0;
    }
};
//通过排序找最大值并且保存坐标,
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
         int maxin=INT_MIN;
        int idx=0;
        int sec=INT_MIN;
         int n=nums.size();
          if(n==1)
            return 0;
         for(int i=0;i<n;i++)
         {
             if(nums[i]>maxin)
             {
                 sec=maxin;
                 maxin=nums[i];
                 idx=i;
             }
             else if(nums[i]>sec)
             {
                 sec=nums[i];
             }
         }
         return maxin>=sec*2 ? idx:-1;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
