#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
//判断每个字母的个数是否相等,这种方式是不行的。如果输入的名字里面有重复的字母的时候怎么办，测试用例里面不仅有长按的还有没按的。
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        unordered_map<char,int> container1;
        unordered_map<char,int> container2;
        for (auto n:name)
        {
            ++container1[n];
        }
        for(auto t:typed)
        {
            ++container2[t];
        }
        for(auto x:container1)
        {
            cout<<x.first<<endl;
            if(container2.find(x.first)!=container2.end())
            {
                if(container2[x.first]>=x.second)
                {

                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

class Solution{
public:
    bool isLongPressedName(string name, string typed) {
    int i=0,m=name.length(),n=typed.length();
    for(int j=0;j<n;j++)
    {
        if(i<m&&name[i]==typed[j])//说明没有长按
        {
            i++;
        }
        else if(typed[j]!=typed[j-1])//如果没有上面的条件说明就是长按了
        {
            return false;
        }
    }
    return i==m;//这个说明是否全按上了，如果没有的话i到不了m

    }
};
int main()
{
    Solution s;
    bool r=s.isLongPressedName("kikcxmvzi","kiikcxxmmvvzz");
    cout<<r<<endl;
    return 0;
}
