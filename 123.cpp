#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//我的思路首先计算出这个低谷与高峰之间的插值然后将这些插值比较选择最大的两个。
//我这个求上升之间的差值，
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> trades;
        int flag=1;//0代表下降，1代表上升，一旦下降就变成0；
        int localminprice=INT_MAX;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<=prices[i+1])
            {
                localminprice=min(prices[i],localminprice);

            }
            else
            {
                int localmaxprofit=prices[i]-localminprice;
                trades.push_back(localmaxprofit);
                localminprice=INT_MAX;
            }
        }
        sort(trades.begin(),trades.end());
        if(trades.size()==0)
        {
            return 0;
        }
        if(trades.size()==1)
        {
            return trades[0];
        }
        else if(trades.size()>=2)
        {
            return trades[trades.size()-1]+trades[trades.size()-2];

        }

    }
};


int main()
{
    vector<int> prices={1,2,3,4,5};
    Solution s;
    int r=s.maxProfit(prices);
    cout<<r<<endl;
    return 0;
}
