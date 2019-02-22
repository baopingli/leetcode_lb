//计算众数
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//速度不行
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=ceil(nums.size()/2);
        sort(nums.begin(),nums.end());
        return nums[n];
    }
};
class Solution1 {
public:
    int majorityElement(vector<int>& nums) {
       map<int,int> m;
       for(auto i:nums) m[i]++;
       for(auto j:m)
       {
           if(j.second>nums.size()/2)
            return j.first;
       }
       return -1;
    }
};
int main()
{
    vector<int> x={3,2,3};
    Solution s;
    int res=s.majorityElement(x);
    cout<<res<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
