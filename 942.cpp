#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    vector<int> diStringMatch(string S) {
	    int Inum=0;
	    int Dnum=0;
	    vector<int> result;
	    for(int i=0;i<S.length();i++)
	    {
		    if(S[i]=='I')
		    {
			    Inum++;
			    result.push_back(Inum-1);
		    }
		    if(S[i]=='D')
		    {
			    Dnum++;
			    result.push_back(S.length()+1-Dnum);
		    }
	    }
	    result.push_back(Inum);
	    return result;
    }
};
int main()
{
	string x="IIII";
	Solution s;
	vector<int> r;
	r=s.diStringMatch(x);
	for(int i=0;i<r.size();i++)
	{
		cout<<r[i]<<endl;
	}
	
	//cout<<s.length()<<endl;
	//cout<<"hello world!"<<endl;
	return 0;
}
