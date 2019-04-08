#include<iostream>
#include<string>
using namespace std;
//Ë¼Â·ÊÇ£º00110011 0011 2 1100 2 0011 2
class Solution {
public:
    int countBinarySubstrings(string s) {
       int curr=1;
       int res=0;
       int pre=0;
       int index=1;
       for(int i=1;i<s.length();i++)
       {
           if(s[i]==s[i-1])
           {
               curr++;
           }
           else
           {
               res+=min(curr,pre);
               pre=curr;
               curr=1;
               index=i;
           }
       }
       return res+min(pre,curr);
    }
};
int main(){


return 0;
}
