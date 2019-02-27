#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        //首先找到白色的车
        int x=0;
        int y=0;
        int res=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                {
                    x=i;
                    y=j;
                }
            }
        }
        //然后往四个方向寻找，遇到黑色的+1，白色的停止。
        //向上移动
        for(int i=x;i>=0;i--)
        {
            if(board[i][y]=='B'||board[i][y]=='p')
            {
                if(board[i][y]=='p')
                    res++;
                break;
            }
        }
        for(int i=x;i<8;i++)
        {
            if(board[i][y]=='B'||board[i][y]=='p')
            {
                if(board[i][y]=='p')
                    res++;
                break;
            }
        }
        for(int i=y;i>=0;i--)
        {
            if(board[x][i]=='B'||board[x][i]=='p')
            {
                if(board[x][i]=='p')
                    res++;
                break;
            }
        }
        for(int i=y;i<8;i++)
        {
            if(board[x][i]=='B'||board[x][i]=='p')
            {
                if(board[x][i]=='p')
                    res++;
                break;
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
