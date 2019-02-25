#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int m=M.size();
        int n=M[0].size();
        vector<vector<int>> res=M;
        vector<vector<int>> dirs={{0,-1},{0,1},{1,0},{-1,0},{1,1},{1,-1},{-1,-1},{-1,1};
        int x=0,y=0;
        int temp=0;
        int all=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp=M[i][j];
                all=1;
                for(auto dir:dirs)
                {
                    x=i+dir[0];
                    y=j+dir[1];
                    if(x<0||x>=m||y<0||y>=n)
                        continue;
                    else
                    {
                        temp+=M[x][y];
                        all++;
                    }

                }
                res[i][j]=temp/all;
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
