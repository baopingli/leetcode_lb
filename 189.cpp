#include<iostream>
#include<vector>
using namespace std;
//循环移位要求复杂度为1，原地算法
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
