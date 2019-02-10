#include<iostream>
#include<bitset>
using namespace std;
class Solution {
public:
    int hammingDistance(int x, int y) {
	    int num=0;
	    for(int i=0;i<32;i++)
	    {
		    if(bitset<sizeof(int)*8>(x)[i]!=bitset<sizeof(int)*8>(y)[i])
			    num++;
		    
	    }	
	    return num;	    
    }
};
int main()
{
	//int n=128;
	Solution s;
	int x=0;
	x=s.hammingDistance(1,4);
	cout<<x<<endl;
	//cout<<bitset<sizeof(int)*8>(n)<<endl;
	//cout<<bitset<sizeof(int)*8>(n)[1]<<endl;
	//cout<<"hello world!"<<endl;
	return 0;
}
