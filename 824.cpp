#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string toGoatLatin(string S) {
        vector<string> splits;
        string s1="md";
        string s2="a";
        string res="";
        int frontindex=0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]==' ')
            {
                splits.push_back(S.substr(frontindex,i-frontindex));
                frontindex=i+1;
            }

        }
        splits.push_back(S.substr(frontindex));
        for(int i=0;i<splits.size();i++)
        {
            if(splits[i][0]=='a'||splits[i][0]=='e'||splits[i][0]=='i'||splits[i][0]=='o'||splits[i][0]=='u'||splits[i][0]=='A'||splits[i][0]=='E'||splits[i][0]=='I'||splits[i][0]=='O'||splits[i][0]=='U')
            {
                splits[i]=splits[i]+s1;
            }
            else
            {
                splits[i]=splits[i].substr(1)+splits[i].substr(0,1)+s1;
            }
            for(int j=0;j<i+1;j++)
            {
                splits[i]+=s2;
            }
        }
        for(auto x:splits)
        {
            res+=x;
            res+=" ";
        }
        res.erase(res.end()-1);
        //res.pop_back();
        return res;

    }
};
int main()
{
    string s="I speak Goat Latin";
    Solution x;
    x.toGoatLatin(s);
    return 0;
}
