#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        int res=INT_MAX;
        int degree=0;
        unordered_map<int,int> m;
        unordered_map<int,pair<int,int>> pos;
        for(int i=0;i<n;i++)
        {
            if(++m[nums[i]==1)
            {
                pos[nums[i]]={1,1};
            }
            else
                pos[nums[i]].second=i;
            degree=max(degree,m[nums[i]);

        }
        for(auto a:m)
        {
            if(a[1]==degree)
            {

                res=min(res,pos[a.first].second-pos[a.first].first+1);
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
