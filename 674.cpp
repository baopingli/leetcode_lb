#include<iostream>
#include<vector>
using namespace std;
//����ĵ���û��˵�ǵȳ��ĵ������У�����˵���Ƕ��ˣ�ֻʹ��һ�������Ϳ����ˡ�
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {

            if(i==0||nums[i-1]<nums[i])
            {
                res=max(res,++cnt);
            }
            else
                cnt=1;
        }
        return res;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
