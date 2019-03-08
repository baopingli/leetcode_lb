#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        it=unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        int n=nums.size();
        if(n<3)
            return nums[n-1];
        return nums[n-3];
    }
};
int main()
{


    return 0;
}
