#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> res;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i][1]>=0&&logs[i][1]<=9)
            {
                res.push_back(logs[i]);

            }
            else
                res.insert(res.begin(),logs[i]);
        }
    }
};
//使用sort函数
  bool myCompare(string a,string b){
    int i=a.find(' ');
    int j=b.find(' ');
    if(!isdigit(a[i+1])&&!isdigit(b[j+1]))
    {
        return a.substr(i+1)<b.substr(j+1);//比较后面的部分
    }
    else
    {
        if(!isdigit(a[i+1])) return true;
        return false;
    }
}
class Solution {
public:


    vector<string> reorderLogFiles(vector<string>& logs) {
        stable_sort(logs.begin(),logs.end(),myCompare);
        return logs;
    }
};
int main()
{
    string s="12345";
    string r=s.substr(2);
    cout<<r<<endl;
    return 0;
}
