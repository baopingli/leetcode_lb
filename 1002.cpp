#include<iostream>
#include<vector>
#include<string>
using namespace std;
//ͳ��string�������е�string����ĸȻ�����е�26����ĸ���бȽ�ѡ����С���Ǹ���Ϊ�����
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> cnt(26,INT_MAX);//�洢���е�26����ĸ���ֵĴ���
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
