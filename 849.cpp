#include<iostream>
#include<vector>
//������������ľ���
//�����ж�ǰ��res=max(res,j-i);
//Ȼ���ж��м�res=max(res,(j-i+1)/2);
//����жϺ��res=max(res,n-i);
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
