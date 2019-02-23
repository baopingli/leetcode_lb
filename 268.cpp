#include<iostream>
#include<vector>
using namespace std;
//通过计算所有数的和，然后做差找到缺失的数字
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int temp=0;
        for(auto a:nums)
        {
            temp+=a;
        }
        return n*(n-1)/2-temp;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
