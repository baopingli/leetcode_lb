#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
	    //vector<int> B(A.size());
	    int temp=0;
	    for(int i=0;i<A.size();i++)
	    {
		    A[i]=pow(A[i],2);
	    }
	    for(int i=0;i<A.size()-1;i++)
	    {
		    for(int j=0;j<A.size()-1-i;j++)
		    {
			    if(A[j]>A[j+1])
			    {
				    temp=A[j];
				    A[j]=A[j+1];
				    A[j+1]=temp;
			    }
		    }

	    }
	    return A;


    }
};
int main()
{
	vector<int> a(10);
	a={1,-1,4,9};
	Solution s;
	vector<int> b(a.size());
	b=s.sortedSquares(a);
	for(int i=0;i<a.size();i++)
	{
		cout<<b[i]<<endl;
	}
	
	return 0;
}
