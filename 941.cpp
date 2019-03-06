#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int n=A.size();
        int flag=0;
        if(n<3)
            return false;
        if(A[0]>=A[1])
            return false;
        for(int i=0;i<n-1;i++)
        {
            if(A[i+1]==A[i])
                return false;
            if(A[i+1]<A[i])
            {
                for(int j=i;j<n-1;j++)
                {
                    if(A[j+1]>=A[j])
                        return false;
                }
                return true;
            }

        }
        return false;
    }
};
//新的解法
 bool validMountainArray(vector<int>& A) {
        int n = A.size(), i = 0, j = n - 1;
        while (i + 1 < n && A[i] < A[i + 1]) i++;//正向
        while (j > 0 && A[j - 1] > A[j]) j--;//反向
        return i > 0 && i == j && j < n - 1;
    }
int main()
{

    return 0;
}
