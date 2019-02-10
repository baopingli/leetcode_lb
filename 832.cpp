#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
	  for(int i=0;i<A.size();i++)
	  {
		  reverse(A[i].begin(),A[i].end());
		 for(int j=0;j<A[i].size();j++)
		  {
			  if(A[i][j])
				  A[i][j]=0;
			  else
				  A[i][j]=1;
		  }
	  }
	return A;  
    }
};
int main()
{
	vector<vector<int>> A;
	A={{1,1,0},{1,0,1},{0,0,0}};
	Solution s;
	A=s.flipAndInvertImage(A);
	for(int i=0;i<A.size();i++)
	{
		for(int j=0;j<A[i].size();j++)
		{
			cout<< A[i][j];
		}
		cout<<endl;
	}
	//cout<<"hello world!"<<endl;
	return 0;
}
