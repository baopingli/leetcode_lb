#include<iostream>
#include<vector>
using namespace std;
//ѭ����λҪ���Ӷ�Ϊ1��ԭ���㷨
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp=nums;
        int n=nums.size();
        for(int i=0;i<k;i++)
        {
            nums[(i+k)%n]=temp[i];
        }
        return nums;
    }
};

int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
