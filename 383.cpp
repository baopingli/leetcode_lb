#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
//��˼����ǰһ���ַ�������ĸ����������ұߵ��ַ�����Ҫ����
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
