#include<iostream>
#include<string>
using namespace std;
//�ҵķ������У�˼·�Ͳ�̫�ԡ�
class Solution {
public:
    string reverseWords(string s) {
        vector<char> temp;
        vector<vector<char>> res;
        string ress;
        for(auto x:s)
        {
            if(x!=' '&&x!='\0')
            {
                temp.push_back(x);
            }
            else{
                reverse(temp.begin(),temp.end());
                res.push_back(temp);
                temp.clear();
            }
        }
        for(auto r:res)
        {
            for(int i=0;i<r.length(),i++)
            {
                ress.append((string)r[i]);
            }
            ress.append(" ");
        }
        return ress;
    }
};
//��ȷ��˼·Ӧ�������ҵ��ո��ʱ���¼������Ȼ�����ֱ�ӽ��в��ֵķ�ת���ɡ�
class Solution {
public:
    string reverseWords(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                int j=i;
                for(;j<s.length()&&s[j]!=' ';j++)
                {
                    /*
                    if(s[j]==' ')
                    {
                        //����д�Ļ��ͻ���һ�������Ǿ��ǵ�������ʱ�򲻻Ὣ�����ַ������з�ת��
                        reverse(s.begin()+i,s.begin()+j);
                        break;
                    }*/

                }
                reverse(s.begin()+i,s.begin()+j);
                i=j-1;
            }
        }
        return s;
    }
};
int main()
{

    return 0;
}
