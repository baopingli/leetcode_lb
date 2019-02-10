#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& A) {
	    int minlength=0;
	    int arraylength=A.size();
	    int strlength=A[0].length();
	    bool flag=true;
	    for(int i=0;i<strlength;i++)
	    {
		    flag=true;
		    for(int j=0;j<arraylength-1;j++)
		    {
			    if(A[j][i]>A[j+1][i])
			    {
				    flag=false;
			    }
		    }
		    if(flag==false)
		    {
			    minlength++;
		    }
	    }
	    return minlength;
    }
};
int main()
{
	vector<string> x;
	vector<string> x1;
	x={"cba","daf","ghi"};
	x1={"a","b"};
	Solution s;
	int m;
	m=s.minDeletionSize(x1);
	cout<<m<<endl;
	//cout<<"hello world!"<<endl;
	return 0;
}
