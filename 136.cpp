 #include<iostream>
 #include<vector>
 //����Ϊ��ͬ��Ԫ������
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(auto x:nums)
        {
            res^=x;
        }
        return res;
    }
};
 int main()
 {
     int res=0;
     res=res^0^0;
     cout<<res<<endl;
     return 0;
 }
