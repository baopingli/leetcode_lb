#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
//�ж�ÿ����ĸ�ĸ����Ƿ����,���ַ�ʽ�ǲ��еġ��������������������ظ�����ĸ��ʱ����ô�죬�����������治���г����Ļ���û���ġ�
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
        if(i<m&&name[i]==typed[j])//˵��û�г���
        {
            i++;
        }
        else if(typed[j]!=typed[j-1])//���û�����������˵�����ǳ�����
        {
            return false;
        }
    }
    return i==m;//���˵���Ƿ�ȫ�����ˣ����û�еĻ�i������m

    }
};
int main()
{
    Solution s;
    bool r=s.isLongPressedName("kikcxmvzi","kiikcxxmmvvzz");
    cout<<r<<endl;
    return 0;
}
