#include<iostream>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int n=A.size();
        int x1=0,x2=0;
        for(int i=0;i<n-1;i++)
        {
            if(A[i]<=A[i+1])
            {
                x1++;
            }
            if(A[i]>=A[i+1])
            {
                x2++;
            }
        }
        if((x1==n-1)||(x2==n-1))
            return true;
        return false;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
