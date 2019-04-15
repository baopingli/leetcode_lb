#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        int res=0;

    int n=A.size();
    int positivenumber=0;
    int negativenumber=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
            negativenumber++;
        if(A[i]>0)
            positivenumber++;
    }
    sort(A.begin(),A.end());
    if(K<negativenumber)
    {
        for(int i=0;i<K;i++)
        {
            A[i]=-A[i];
        }
        for(int i=0;i<n;i++)
        {
            res+=A[i];
        }
    }
    if(K>=negativenumber)
    {
        //奇数
        if((K-negativenumber)%2==1)
        {
            //最小的正数变成负的
            int temp=0;
          for(int i=0;i<=negativenumber;i++)
          {
              A[i]=-A[i];
          }
          for(int i=0;i<n;i++)
          {
              res+=A[i];
          }
          temp=res;
          cout<<temp<<endl;
          A[negativenumber]=-A[negativenumber];
          A[negativenumber-1]=-A[negativenumber];
          res=0;
          for(int i=0;i<n;i++)
          {
              res+=A[i];
          }
          cout<<res<<endl;
          res=max(res,temp);
        }
        //偶数
        if((K-negativenumber)%2==0)
        {
          for(int i=0;i<negativenumber;i++)
          {
              A[i]=-A[i];
          }
          for(int i=0;i<n;i++)
          {
              res+=A[i];
          }
        }
    }
    return res;
    }
};
int main()
{
    vector<int> x={-8,3,-5,-3,-5,-2};
    Solution s;
    int r=s.largestSumAfterKNegations(x,6);
    cout<<r<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
