#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n&&cnt<=1;i++)
        {
            if(nums[i-1]>nums[i])
            {
                cnt++;
                if(i-2<0||nums[i-2]<=nums[i])
                {
                    nums[i-1]=nums[i];
                }
                else
                {
                    nums[i]=nums[i-1];
                }
            }
        }
        return cnt<=1;

    }
};
int main()
{

    return 0;
}
