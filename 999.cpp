#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        //�����ҵ���ɫ�ĳ�
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
        //Ȼ�����ĸ�����Ѱ�ң�������ɫ��+1����ɫ��ֹͣ��
        //�����ƶ�
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
