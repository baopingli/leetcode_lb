#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
//先对字符串进行截取然后将每个截取的字符串进行处理。
class Solution {
public:
    string reverseStr(string s, int k) {
        //将字符串进行截取
        int len=s.length();
        vector<string> temp;
        int x=len/(2*k);
        int y=len%(2*k);
        if(x==0)//说明s<2*k
        {
            temp.push_back(s);
        }
        else{
            for(int i=0;i<x;i++)
            {
                string xx=s.substr(0+i*2*k,2*k);
                temp.push_back(xx);

            }
            temp.push_back(s.substr(len-y));
        }
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i].length()<2*k)
            {
                if(temp[i].length()>=k)
                {
                    string tt=temp[i].substr(0,k);
                    reverse(tt.begin(),tt.end());
                    temp[i]=tt+temp[i].substr(k);
                }
                else
                    reverse(temp[i].begin(),temp[i].end());
            }
            else{
                string mm=temp[i].substr(0,k);
                reverse(mm.begin(),mm.end());
                temp[i]=mm+temp[i].substr(k);

            }
        }
        string r="";
        for(auto ss:temp)
        {
            r+=ss;
        }
        return r;
    }
};
//上面的方式太慢了，其实可以直接n的复杂度解决。

   class Solution2 {
public:

    string reverseStr(string s, int k) {
        for (int left = 0; left < s.size(); left += 2 * k) {
            for (int i = left, j = min(left + k - 1, (int)s.size() - 1); i < j; i++, j--) {
                swap(s[i], s[j]);
            }
        }
        return s;
    }
};

int main()
{
    string s="abcdefg";
    Solution ss;
    string r=ss.reverseStr(s,2);
    //string r=s.substr(4,4);
    cout<<r<<endl;
    return 0;
}
