#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
	    vector<char> result;
	    for(int i=s.size()-1;i>=0;i--)
	    {
		    result.push_back(s[i]);
	    }
	    s=result;
    }
};
int main()
{
	vector<int> x;
	x={1,2,3,1,5,6};
	for(auto m : x)
	{
		cout<<m<<endl;
	}

	return 0;
}
