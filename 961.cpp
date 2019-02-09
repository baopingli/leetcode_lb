#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for(int i=0;i<A.size();i++)
	{
		int count=0;
		for(int j=0;j<A.size();j++)
		{
			if(A[i]==A[j])
				count++;
			if(count==A.size()/2)
				return A[i];
		}
	}
    }
};
int main()
{
	vector<int> A(4);
	A={1,2,3,3};
	Solution s;
	int x=s.repeatedNTimes(A);
	cout<<x<<endl;
	cout<<"hello world!"<<endl;
	return 0;
}
