#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
	    for(int i=0;i<A.size()-1;i++)
	    {
		    if(A[i]>A[i+1])
			    return i;
	    }
	    return A.size()-1;
    }
};
int main()
{
	vector<int> a={0,1,2,3};
	Solution s;
	int x;
	x=s.peakIndexInMountainArray(a);
	cout<<x<<endl;
	return 0;
}
