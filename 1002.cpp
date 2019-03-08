#include<iostream>
#include<vector>
#include<string>
using namespace std;
//统计string串中所有的string中字母然后将所有的26个字母进行比较选择最小的那个作为结果。
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> cnt(26,INT_MAX);//存储所有的26个字母出现的次数
        vector<string> res;
        for(auto s:A)
        {
            vector<int> temp(26,0);
            for(auto a:s) ++temp[a-'a'];
            for(auto i=0;i<26;i++) cnt[i]=min(cnt[i],temp[i]);
        }
        for(auto i=0;i<26;i++)
        {
            for(auto j=0;j<cnt[i];j++)
                res.push_back(string(1,i+'a'));
        }
        return res;
    }
};
int main()
{

    return 0;
}
