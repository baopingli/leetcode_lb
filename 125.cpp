#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                temp.push_back(s[i]+32);
            }
            else if(s[i]>='a'&&s[i]<='z')
            {
                temp.push_back(s[i]);
            }
            else
            {

            }
        }
        int j=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {

            }
            else if(s[i]>='a'&&s[i]<='z')
            {

            }
            else
            {

            }
        }
    }
};
//����ָ�����ߺʹ��ұ߿�ʼ����������������ֻ�������ĸ�ľ�����Ȼ��Ƚ����ֻ�����ĸ�Ƿ���ͬ
class Solution{
public:
    bool isPalindrome(string s)
    {
        for(int i=0,j=s.length()-1;i<j;i++,j--)
        {
            while(isalnum(s[i])==false&&i<j)i++;
            while(isalnum(s[j])==false&&i<j)j--;
            if(toupper(s[i])!=toupper(s[j]))
                return false;
        }
        return true;
    }

};
int main()
{
    cout<<'a'-'A'<<endl;
    return 0;
}
