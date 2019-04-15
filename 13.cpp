#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        unordered_map<char,int> dic={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int res=dic[s.back()];

        for(int i=n-2;i>=0;i--)
        {
            if(dic[s[i]]<dic[s[i+1]])
            {
                res-=dic[s[i]];
            }
            else
                res+=dic[s[i]];
        }
        return res;

    }
};
int main()
{
    string xx="LVIII";
    Solution s;
    int r=s.romanToInt(xx);
    cout<<r<<endl;
    return 0;
}
