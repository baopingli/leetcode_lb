#include<iostream>
#include<vector>
using namespace std;
//�ҵ�˼·�������ж��ܹ��ж��ٸ�3x3����Ȼ������ȥ�ж��ǲ��ǻ÷�����
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
