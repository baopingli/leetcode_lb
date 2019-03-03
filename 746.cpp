#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n=cost.size();
        vector<int> dp(n);//ษ๙ร๗ด๓ะก
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};
int main()
{

    cout<<"hello world"<<endl;
    return 0;
}
