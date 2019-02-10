#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
	    int Rnum=count(moves.begin(),moves.end(),'R');
	    int Lnum=count(moves.begin(),moves.end(),'L');
	    int Unum=count(moves.begin(),moves.end(),'U');
	    int Dnum=count(moves.begin(),moves.end(),'D');
	    if(Rnum==Lnum&&Unum==Dnum)
		    return true;
	    else
		    return false;
    }
};
class Solution1{
	public:
		bool judgeCircle(string moves){
			int R=0;
			int L=0;
			int U=0;
			int D=0;
			for(int i=0;i<moves.length();i++)
			{
				if(moves[i]=='R')
					R++;
				if(moves[i]=='L')
					L++;
				if(moves[i]=='U')
					U++;
				if(moves[i]=='D')
					D++;
			}
			if(R==L&&U==D)
				return true;
			else
				return false;
		}
};
int main()
{
	string m="LL";
	Solution1 s;
	bool r=s.judgeCircle(m);
	cout<<r<<endl;
	//cout<<"hello world!"<<endl;
	return 0;
}
