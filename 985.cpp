#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
	    vector<int> result;
	    for(int i=0;i<queries.size();i++)
	    {
		    A[queries[i][1]]=A[queries[i][1]]+queries[i][0];
		    int x=calculate(A);
		    result.push_back(x);
	    }
	    return result;

    }
    int calculate(vector<int> A)
    {
	    int sum=0;
	    for(int i=0;i<A.size();i++)
	    {
		    if(A[i]%2==0)
			    sum+=A[i];
	    }
	    return sum;

    }
};
int main()
{
	vector<int> A;
	A={1,2,3,4};
	vector<vector<int>> queries;
	queries={{1,0},{-3,1},{-4,0},{2,3}};
	Solution s;
	vector<int> r;
	r=s.sumEvenAfterQueries(A,queries);
	for(int i=0;i<r.size();i++)
	{
		cout<<r[i]<<endl;
	}
	//cout<<"hello world!"<<endl;
	return 0;
}
