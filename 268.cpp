#include<iostream>
#include<vector>
using namespace std;
//ͨ�������������ĺͣ�Ȼ�������ҵ�ȱʧ������
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
