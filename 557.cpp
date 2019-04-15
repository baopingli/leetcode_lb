#include<iostream>
#include<string>
using namespace std;
//我的方法不行，思路就不太对。
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
//正确的思路应该是在找到空格的时候记录下来，然后进行直接进行部分的反转即可。
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
                        //这样写的话就会有一个问题那就是到了最后的时候不会将最后的字符串进行反转。
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
