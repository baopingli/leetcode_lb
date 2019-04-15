#include<iostream>
#include<vector>
using namespace std;
//我的思路是首先判断能够有多少个3x3矩阵然后依次去判断是不是幻方矩阵
class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int res=0;
        for(int i=0;i<=n-3;i++)
        {
            int row1=grid[0][i]+grid[0][i+1]+grid[0][i+2];
            int row2=grid[0][i]+grid[0][i+1]+grid[0][i+2];
            int row3=grid[0][]
        }

    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
