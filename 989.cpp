#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
//我的方法不行
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        double a=0;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            a+=A[i]*pow(10,n-i-1);
        }

        a=a+K;
        cout<<a<<endl;
        vector<int> res;
        while(a>0)
        {
            res.push_back(a%10);
            a=a/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
//相当于在数组的形式下做加减运算
class Solution{
public:
     vector<int> addToArrayForm(vector<int>& A, int K) {
         for(int  i=A.size()-1;i>=0&&k>0;i--)
         {
             A[i]+=K;
             K=A[i]/10;
             A[i]%=10;

         }
         while(K>0)
         {

             A.insert(A.begin(),K%10);
             K/=10;
         }
         return A;
     }
};
int main()
{
    Solution s;
    vector<int> x;
    x={1,2,6,3,0,7,1,7,1,9,7,5,6,6,4,4,0,0,6,3};
    vector<int> r=s.addToArrayForm(x,516);
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<endl;
    }
    cout<<"hello world"<<endl;
    return 0;
}
