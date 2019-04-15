#include<iostream>
#include<vector>
using namespace std;
//我的思路是首先判断能够有多少个3x3矩阵然后依次去判断是不是幻方矩阵
class Solution {
public:
<<<<<<< HEAD
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int res=0;
        for(int i=0;i<=n-3;i++)
        {
            int row1=grid[0][i]+grid[0][i+1]+grid[0][i+2];
            int row2=grid[0][i]+grid[0][i+1]+grid[0][i+2];
            int row3=grid[0][]
        }
=======
    bool chk(vector<vector<int>>& grid,int m,int n)
    {
        if(m+3>grid.size())
        {
            return false;
        }
        if(n+3>grid.size())
        {
            return false;
        }
        vector<bool> v(10,false);
        //保证输入的数组是从1到9组成的。

        for(int i=m;i<m+3;i++)
        {
            for(int j=n;j<n+3;j++)
            {
                v[grid[i][j]]=true;
            }
        }

        int sum=grid[m][n]+grid[m+1][n+1]+grid[m+2][n+2];
        if(sum!=grid[m][n+2]+grid[m+1][n+1]+grid[m+2][n])
        {
            return false;
        }
        for(int i=m;i<m+3;i++)
        {
            if(grid[i][n]+grid[i][n+1]+grid[i][n+2]!=sum)
            {
                return false;
            }
        }
        for(int i=n;i<n+3;i++)
        {
            if(grid[m][i]+grid[m+1][i]+grid[m+2][i]!=sum)
            {
                return false;
            }
        }

        for(int i=1;i<=9;i++)
        {
            if(!v[i])
            {
                return false;
            }
        }

        return true;

>>>>>>> 91de95577bf2eaf16556d0809cea6d29abe86a8c





    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int cnt=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(chk(grid,i,j))
                    cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
