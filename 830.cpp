#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> ans;
       if(S.length()<3) return ans;
       int i=0;
       while(i<S.length())
       {
           int j=i;
           while(S[i]=S[j]) j++;
           if(j-i>2)
           {
               vector<int> temp;
               temp.push_back(i);
               temp.push_back(j-1);
               ans.push_back(temp);
           }
           i=j;
       }
       return ans;
    }
};
int main()
{
    string s="hello";
    cout<<s[0]<<endl;
    vector<vector<int>> x;
    pair<int,int> y={1,1};
    x=y;
    cout<<"hello world"<<endl;
    return 0;
}
