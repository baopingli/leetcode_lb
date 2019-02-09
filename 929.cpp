#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
class Solution1 {
public:
    int numUniqueEmails(vector<string>& emails) {
	    for(int i=0;i<emails.size();i++)
	    {
		    char buf[256];
		    int length=emails[i].copy(buf,emails[i].length());
		    for(int j=0;j<length;j++)
		    {
			    while(buf[j]!='@')
			    {

			    }
		    }
	    }
    }
};
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
	     unordered_set<string> validEmails;
	    for(int i=0;i<emails.size();i++)
	    {
		    string local="";
		    //首先将最后一个@之前的部分提取出来
		    int p=emails[i].find_last_of('@');
		    string temp=emails[i].substr(0,p);
		    for(int j=0;j<p;j++)
		    {
			    if(temp[j]=='+')
				    break;
			    if(temp[j]=='.')
				    continue;
			    local.push_back(temp[j]);
		    }
		    string email=local+emails[i].substr(p);
		    validEmails.insert(email);

	    }
	    return validEmails.size();

    }
};
class Solution2 {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> validEmails;
        for (int i=0; i<emails.size(); ++i){
            const string& e = emails[i];
            string local = "";
            for (int j = 0; j<e.size(); ++j){
                //If we find a '+' break we don't care for the rest of the string
                if (e[j] == '+'){
                    break;
                }

                //skip the '.' and don't include it in the local name
                if (e[j] == '.'){
                    continue;
                }

                //only include valid chars
                local.push_back(e[j]);
            }
            
            //get the index of the '@'
            int j = e.find_last_of('@');
            //combine local name with the substring of the input start at position j. Will get domain name 
            string email = local + e.substr(j);
            
            validEmails.insert(email);
	    cout<<email<<endl;
        }
        
        return validEmails.size();
    }
};

int main()
{
	//string s= "abcd";
	vector<string> emails(3);
	emails={"test.emailalex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
	Solution s;
	s.numUniqueEmails(emails);
	//const string& e=s;
	//cout<<s[1]<<endl;
	//cout<<"hello world!"<<endl;
	return 0;
}
