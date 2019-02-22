//移除元素
//要在这个数组中进行，所以需要另外的一个index计数器来重置数组
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0||(n==1&&nums[0]==val)) return 0;
        if(n==1) return 1;
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
               nums[index]=nums[i];
               index++;
            }
        }
        return index;
    }
};
int main()
{
    vector<int> x={3,2,2,3};
    Solution s;
    int res=s.removeElement(x,3);
    cout<<res<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
