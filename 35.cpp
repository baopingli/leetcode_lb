#include<iostream>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
                return i;

        }
        nums.push_back(target);
        sort(nums.begin(),nums.end());
        for(int i=0;i<n+1;i++)
        {
            if(nums[i]==target)
                return i;
        }
        return 0;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(target<=nums[i])
                return i;

        }
        return n;
    }
};
int main()
{

    cout<<"hello world"<<endl;
    return 0;
}
