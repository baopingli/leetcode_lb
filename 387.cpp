#include<iostream>
#include<string>
using namespace std;
class Solution1 {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> temp;

        for(auto ss:s)
        {
            ++temp[ss];
        }
       for(int i=0;i<s.length();i++)
       {
           if(temp[s[i]]==1)
               return i;
       }

        return -1;
    }
};
class Solution2
{
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> m;
        int inx=s.length();
        for(int i=0;i<s.length();i++)
        {
            m[s[i]].first++;
            m[s[i]].second=i;
        }
        for(auto x:m)
        {
            if(x.second.first==1)
                inx=min(inx,x.second.second);//找到最靠前的那个只出现一次的那个
        }
        return inx==s.length()?-1:inx;
    }
};
int main()
{
    string x="cc";
    Solution s;
    int r=s.firstUniqChar(x);
    cout<<r<<endl;
    return 0;
}
