#include<iostream>
using namespace std;
class Solution {
public:
    int findComplement(int num) {
	    int a[32],i;
	    int result=0;
	    for(i=0;num>0;i++)
	    {
		    a[i]=(num%2==1) ? 0 : 1;
		    num=num/2;
	    }
	    for(i=i-1;i>=0;i--)
	    {
		    result+=a[i]*pow(2,i);
	    }
	    return result;

    }
};
int main()
{
	cout<<"hello world!"<<endl;
	return 0;
}
