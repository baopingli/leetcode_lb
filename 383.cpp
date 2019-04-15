#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
//意思就是前一个字符串的字母及其个数，右边的字符串都要包括
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> num(26);
        for(auto x:magazine)
        {
            ++num[x];
        }
        for(auto x:ransomNote)
        {
            if(--num[x]>=0);
            else
                return false;

        }
        return true;
    }
};
int main()
{
    return 0;
}
