#include<iostream>
#include<vector>
using namespace std;
//这个方法想麻烦了，就不能把问题想麻烦了
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //首先找到价格最低的一天然后买入
        for(int i=0;i<prices.size();i++)
        {
             int minprice=min_element(prices.begin(),prices.end());
             int index=distance(begin(prices),minprice);
             int earn=0;
             int n=prices.size();
             if(index==n)
                return 0;
             for(int i=index-1;i<n;i++)
             {
                 int x=i;
                 int flag=1;
                 while(flag)
                 {
                     if(prices[x]<)
                 }
             }

        }
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int res=0;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                res+=prices[i+1]-prices[i];
            }
        }
        return res;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
