//�����������˻�
#include<iostream>
#include<vector>
using namespace std;
//�����ǲ��е�
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
      sort(nums.begin(),nums.end());
      return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};
//�Ѹ���������������
class Solution1 {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {

        }
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
