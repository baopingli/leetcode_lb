#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
	    int exist[256]={0};
	    for(int i=0;i < J.length();i++)
	    {
		    exist[J.at(i)]=1;
	    }
	    int num=0;
	    for(int i=0;i<S.length();i++)
	    {
		    if(exist[S.at(i)])
		    {
			    num++;
		    }
	    }
	    return num;

    }
};

class Solution1 {
public:
    int numJewelsInStones(string J, string S) {
	    int num=0;
	    for(int i=0;i<J.length();i++)
	    {
		    for(int j=0;j<S.length();j++)
		    {
			    if(S.at(j)==J.at(i))
			    {
				    num++;
			    }
		    }
	    }
	    return num;

    }
};


int main()
{

	string a="aZ";
	string b="aZZZssss";
	Solution1 s;
	cout<<a.length()<<endl;

	int w =s.numJewelsInStones(a,b);
	cout<<w<<endl;
	return 0;
}
