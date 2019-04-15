#include<iostream>
#include<vector>
using namespace std;
//思路一
//在中间的时候要至少连续三个0才能种一个，5个0中两个，7个0种三个，（n-1)/2
//然后如果是边上的话 种n/2个
//问题转换为求边上和中间的0的个数。
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int res=0;
        int m=flowerbed.size();
        int temp=0;
        int index=-2;
        int flag=1;
        for(int i=0;i<m;i++)
        {
            if(flowerbed[i]==1&&i!=0&&flag==1)
            {
                res+=i/2;
                index=i;
                flag=0;
            }
            else if(flowerbed[i]==1)
            {
                res+=(i-index-1-1)/2;
                cout<<res<<endl;
                index=i;
                flag=0;
            }
            else;
            cout<<index<<endl;

        }
        res+=(m-1-index)/2;
        cout<<res<<endl;
        return res>=n;
    }
};
//思路二：
//数组前后补0，然后每三个零可以种一支花。
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      flowerbed.insert(flowerbed.begin(),0);
      flowerbed.push_back(0);
      for(int i=1;i<flowerbed.size()-1;i++)
      {
          if(flowerbed[i-1]+flowerbed[i]+flowerbed[i+1]==0)
          {
              --n;
              i++;
          }
      }
      return n<=0;
    }
};
int main()
{
    vector<int> x={1,0,0,0,0,0,1};
    Solution s;
    bool r=s.canPlaceFlowers(x,1);
    cout<<r<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
