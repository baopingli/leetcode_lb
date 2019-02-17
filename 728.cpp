#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
	    vector<int> result;
	    int flag=0;
	    for(int i=left;i<=right;i++)
	    {
		    flag=0;		    
		    int temp=i;
		    while(temp)
		    {
			    int x=temp%10;
			    if(x==0||i%x!=0)
			    {
				    flag=1;
				    break;
			    }
			    temp=temp/10;
		    }
		    if(flag==0)
		    {
			    result.push_back(i);
		    }

	    }
	    return result;

    }
};
int main()
{
	Solution s;
	vector<int> x;
/*	x=s.selfDividingNumbers(1,22);
	for(int i=0;i<x.size();i++)
	{
		cout<<x[i]<<endl;
	}
*/	//int m=1;
	//cout<<m/10<<endl;
	int m=10;
	while(m)
	{
		cout<<m%10<<endl;
		m=m/10;
	}
	cout<<"hello world!"<<endl;
	int ss=1%0;
	return 0;
}
