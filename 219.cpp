#include<iostream>
#include<vector>
using namespace std;
//自己的算法太慢了
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j]&&abs(j-i)<=k)
                    return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int> m;
       for(int i=0;i<nums.size();i++)
       {
           if(m.find(nums[i])!=m.end()&&i-m[nums[i]]<=k)
            return true;
           else
            m[nums[i]]=i;
       }
       return false;
    }
};
int main()
{

    return 0;
}
