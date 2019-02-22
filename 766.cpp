#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        //从左到右
        for(int i=0;i<n-1;i++)
        {
            int temp=matrix[0][i];
            int x=0;
            int y=i;
            while(x<m&&y<n)
            {

                if(matrix[x][y]==temp);
                else
                    return false;
                x++;
                y++;
            }
        }
        //从上到下
        for(int i=1;i<m-1;i++)
        {
            int temp=matrix[i][0];
            int x=i;
            int y=0;
            while(x<m&&y<n)
            {
                if(matrix[x][y]==temp);
                else
                    return false;
                x++;
                y++;
            }
        }
        return true;
    }
};
int main()
{
    vector<vector<int>> x;
    x={{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    Solution s;

    bool res=s.isToeplitzMatrix(x);
    cout<<res<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
