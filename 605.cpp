#include<iostream>
#include<vector>
using namespace std;
//˼·һ
//���м��ʱ��Ҫ������������0������һ����5��0��������7��0����������n-1)/2
//Ȼ������Ǳ��ϵĻ� ��n/2��
//����ת��Ϊ����Ϻ��м��0�ĸ�����
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
//˼·����
//����ǰ��0��Ȼ��ÿ�����������һ֧����
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
