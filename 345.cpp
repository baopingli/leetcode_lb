#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index;
        vector<char> xx;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='U'||s[i]=='u'||s[i]=='O'||s[i]=='o')
            {
               index.push_back(i);
               xx.push_back(s[i]);
            }
        }

        reverse(xx.begin(),xx.end());
for(int i=0;i<index.size();i++)
        {
            s[index[i]]=xx[i];

        }
        return s;
    }
};
int main()
{
    vector<char> x={'e','e','o','e'};
    reverse(x.begin(),x.end());
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<endl;

    return 0;
}
