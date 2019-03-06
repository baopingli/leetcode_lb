#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
      int n=nums.size();
        int res=INT_MIN;
        for(int i=0;i<=n-k;i++)
        {
            int temp=0;
            for(int j=0;j<k;j++)
            {
                temp+=nums[i+j];
            }
            res=max(res,temp);
        }
        return (double)res/k;
    }
};
int main()
{
    vector<int> x={-1};
    Solution s;
    double r=s.findMaxAverage(x,1);
    cout<<r<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
