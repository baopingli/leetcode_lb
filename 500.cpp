#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
	vector<char> x1;
	vector<char> x2;
	vector<char> x3;
	x1={'q','w','e','r','t','y','u','i','o','p'};
	x2={'a','s','d','f','g','h','j','k','l'};
	x3={'z','x','c','v','b','n','m'};
    vector<string> findWords(vector<string>& words) {
	   /* for(int i=0;i<words.size();i++)
	    {
		    for(int j=0;j<words[i].length();j++)
		    {

		    }
	    }*/
	    vector<string> result;
	    for(string word : words)
	    {
		    int one=0,two=0,three=0;
		    for(char ch :word)
		    {
			    if(ch<'a') ch+=32;
			    if(x1.count(ch)) one=1;
			    if(x2.count(ch)) two=2;
			    if(x3.count(ch)) three=3;
			    if(one+two+three>1) break;
		    }
		    if(one+two+three==1)
			    result.push_back(word);
	    }
	    return result;
    }
};
class Solution {
public:

    vector<string> findWords(vector<string>& words) {
           /* for(int i=0;i<words.size();i++)
            {
                    for(int j=0;j<words[i].length();j++)
                    {

                    }
            }*/
        unordered_set<char> x1;
        unordered_set<char> x2;
        unordered_set<char> x3;
        x1={'q','w','e','r','t','y','u','i','o','p'};
        x2={'a','s','d','f','g','h','j','k','l'};
        x3={'z','x','c','v','b','n','m'};
            vector<string> result;
            for(string word : words)
            {
                    int one=0,two=0,three=0;
                    for(char ch :word)
                    {
                            if(ch<'a') ch+=32;
                            if(x1.count(ch)) one=1;
                            if(x2.count(ch)) two=1;
                            if(x3.count(ch)) three=1;
                            if(one+two+three>1) break;
                    }
                    if(one+two+three==1)
                            result.push_back(word);
            }
            return result;
    }
};
int main()
{

	cout<<'a'-'A'<<endl;
	cout<<"hello world!"<<endl;
	return 0;
}
