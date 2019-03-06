#include<iostream>
#include<vector>
//到最近的人最大的距离
//首先判断前端res=max(res,j-i);
//然后判断中间res=max(res,(j-i+1)/2);
//最后判断后端res=max(res,n-i);
using namespace std;
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int i,j,res=0,n=seats.size();
        for(i=j=0;j<n;j++)
        {
            if(seats[j]==1)
            {
                if(i==0) res=max(res,j-i);
                else
                    res=max(res,(j-i+1)/2);
                i=j+1;
            }
        }
        res=max(res,n-i);
        return res;
    }
};
int main()
{

    return 0;
}
