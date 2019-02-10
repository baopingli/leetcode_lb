#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
	    vector<string> dic(26);
	    unordered_set<string> result;
	    dic={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	    string temp="";
	    for(int i=0;i<words.size();i++)
	    {
		    temp="";
		   
		    for(int j=0;j<words[i].length();j++)
		    {
			temp+=dic[words[i][j]-'a'];	    
		    }
		    result.insert(temp);
	    }
	    return result.size();
    }
};
int main()
{
	string s1="123";
	string s2="456";
	string s3=s1+s2;
	vector<string> s4={"gin", "zen", "gig", "msg"};
	Solution s;
	int x=s.uniqueMorseRepresentations(s4);
	cout<<x<<endl;
	//cout<<'b'-'a'<<endl;
	//cout<<"hello world!"<<endl;
	return 0;
}
