#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//�ҵ�˼·���ȼ��������͹���߷�֮��Ĳ�ֵȻ����Щ��ֵ�Ƚ�ѡ������������
//�����������֮��Ĳ�ֵ��
//���˼·�ǲ��Եģ���Ϊ�п��ܼ�ʹ�����������߷嵫�ǲ��������߷����һ���ʱ��profit������˵������⻹�͵���ô�����
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> trades;
        int flag=1;//0�����½���1����������һ���½��ͱ��0��
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

class Solution3{
public:
    int maxProfit(vector<int> &prices)
    {
        int localminprice=0;
        int localmaxprice=0;
        int flag=0;
        if(prices[0]>prices[1])
            flag=0;
        if(prices[0]<=prices[1])
            flag=1;
        vector<int> trades;
        for(int i=1;i<prices.size()-1;i++)
        {
            if(prices[i]<=prices[i+1]&&flag==0)//�ֲ���С��
            {
                localminprice=prices[i];
            }
            if(prices[i]>prices[i+1]&&flag==1)
            {
                localminprice=prices[i];

            }
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
