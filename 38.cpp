#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n==0) return "";
        string res="1";
         for(int i=0;i<n-1;i++)
         {
             string cur="";
             for(int j=0;j<res.size();j++)
             {
                 int count = 1;
                 while((j+1<res.size())&&(res[j]==res[j+1]))
                 {
                     count++;
                     j++;
                 }
                 cur+=to_string(count)+res[j];
             }
             res=cur;
         }
         return res;
    }
};
int main()
{
    Solution s;
    string r=s.countAndSay(4);
    cout<<r<<endl;

    return 0;
}
