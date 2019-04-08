#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string S) {
        vector<char> temp;
        for(int i=0;i<S.length();i++)
        {
            if((S[i]>='a'&&S[i]<='z')||(S[i]>='A'&&S[i]<='Z'))
            {
                temp.push_back(S[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        for(int i=0;i<S.length();i++)
        {
            if((S[i]>='a'&&S[i]<='z')||(S[i]>='A'&&S[i]<='Z'))
            {
                S[i]=temp[i];
            }
        }
        return S;
    }
};
int main()
{
    string s="ab-ces";
    //Solution ss;
    //string r=ss.reverseOnlyLetters(s);
    //cout<<r<<endl;
    vector<char> xx;
    for(auto x:s)
    {
        if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
        {
            xx.push_back(x);
            cout<<x<<endl;
        }
    }
    reverse(xx.begin(),xx.end());
    for(int i=0;i<xx.size();i++)
    {
        cout<<xx[i]<<endl;
    }

    return 0;
}
