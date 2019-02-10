#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
	    vector<int> A1;
	    vector<int> A2;
	    vector<int> B;
	    for(int i=0;i<A.size();i++)
	    {
		    if(A[i]%2==1)
		    {
			    A1.push_back(A[i]);
		    }
		    if(A[i]%2==0)
		    {
			    A2.push_back(A[i]);
		    }
	    }
	    for(int i=0;i<A.size();i++)
	    {
		    if(i%2==0)
		    {
			    B.push_back(A2[i/2]);
		    }
		    if(i%2==1)
		    {
			    B.push_back(A1[(i-1)/2]);
		    }
	    }
	    return B;
    }
};
int main()
{
	vector<int> A;
	A={4,2,5,7};
	Solution s;
	vector<int> B;
	B=s.sortArrayByParityII(A);
	for(int i=0;i<B.size();i++)
	{
		cout<<B[i]<<endl;
	}

	//cout<<"hello world!"<<endl;
	return 0;

}
