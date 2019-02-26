#include<iostream>
#include<vector>
using namespace std;
//���ַ��������Ҫ��ס
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        int curnum=0;
        for(auto num:nums)
        {
            curnum=max(curnum+num,num);
            res=max(curnum,res);
        }
        return res;
    }
};
//���η����ǽ������Ϊ������������Ȼ������������ߵ�����������ĺ�Ȼ����м俪ʼ����������������
class Solution1 {
public:
   int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        return helper(nums,0,(int)nums.size()-1);
    }
    int helper(vector<int>& nums,int left,int right)
    {
        if(left>=right) return nums[left]; //��������
        int mid=left+(right-left)/2;
        int lmax=helper(nums,left,mid-1);
        int rmax=helper(nums,mid+1,right);
        int mmax=nums[mid],t=mmax;
        for(int i=mid-1;i>=left;i--)
        {

            t+=nums[i];
            mmax=max(mmax,t);
        }
        t=mmax;
        for(int i=mid+1;i<=right;i++)
        {

            t+=nums[i];
            mmax=max(mmax,t);
        }
        return max(mmax,max(lmax,rmax));


    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
