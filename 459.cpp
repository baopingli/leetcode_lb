#include<iostream>
#include<string>
using namespace std;
class Solution {
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss=s+s;
        int len=s.length();
        ss=ss.substr(1,2*len-2);
        for(int i=0;i<=len-2;i++)
        {
            if(s==ss.substr(i,len))
                return true;
        }
        return false;
    }
};
int main()
{

    return 0;
}
