#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
	    vector<int> B;
	    for(int i=0;i<A.size();i++)
	    {
		    if(A[i]%2==0)
		    {
			    B.insert(B.begin(),A[i]);
		    }
		    if(A[i]%2==1)
		    {
			    B.push_back(A[i]);
		    }
			    
	    }
	    return B;
    }
};
int main()
{
	vector<int> A(4);
	A={3,1,5,9};
	Solution s;
	vector<int> B(4);
	B=s.sortArrayByParity(A);
	for(int i=0;i<4;i++)
	{
		cout<<B[i]<<endl;
	}

        cout<<"hello world!"<<endl;
        return 0;
}
