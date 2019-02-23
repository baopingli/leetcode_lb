#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        auto minposition=min_element(prices.begin(),prices.end());
        int minprice=*minposition;
        cout<<minprice<<endl;
        //int index=distance(begin(prices),minprice);
        int index=minposition-prices.begin();
        cout<<index<<endl;
        int maxprice=0;
        maxprice=prices[index];
        for(int i=index;i<n;i++)
        {
            if(maxprice<prices[i])
                maxprice=prices[i];
        }
        cout<<maxprice<<endl;
        return maxprice-minprice;
    }
};
//2151629
class Solution1 {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0||n==1)
            return 0;
        for(int i=0;i<)
    }
};
//这个问题可以进行扩展。
class Solution2 {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int buy=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            buy=min(buy,prices[i]);
            res=max(res,prices[i]-buy);
        }
    }
};

int main()
{
    vector<int> xx={2,4,1};
    Solution1 s;
    int res=s.maxProfit(xx);
    cout<<res<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
