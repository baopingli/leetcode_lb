#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int s1=haystack.length();
        int s2=needle.length();
        if(s2==0)
            return 0;
        for(int i=0;i<s1-s2+1;i++)
        {
             int k=0;
            for(int j=i;j<i+s2;j++)
            {

                if(haystack[j]==needle[j-i])
                {
                    k++;
                }
                if(k==s2)
                    return i;
            }
        }
        return -1;
    }
};
int main(){



return 0;

}
