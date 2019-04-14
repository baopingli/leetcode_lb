#include<iostream>
#include<string>
#include<unordered_map>
#include<stack>
using namespace std;
//这种情况下只有括号,没有其他的字符串
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> temp={{'(',')'},{'{','}'},{'[',']'}};
        stack<char> ss;
        for(auto x:s)
        {
            if(x='('||x=='{'||x=='[')
            {
                ss.push(x);
            }
            else
            {
                if(ss.size()==0) return false;
                char top=ss.top();
                if(top!=x)
                {
                    return false;
                }
                ss.pop();
            }
        }
    }
};

class Solution2{
public:
    bool isValid(string s) {
        stack<char> x;
        for(auto ss:s)
        {
            if(ss=='('||ss=='{'||ss=='[')
                {
                    x.push(ss);
                }
                else{
                         if(ss==')'&&x.top()!='(') return false;
                 if(ss==']'&&x.top()!='[') return false;
                 if(ss=='}'&&x.top()!='{') return false;
                x.pop();

                }


        }
        return x.empty();
    }
};

int main(){
    string s="()";
    Solution2 ss;
    bool r=ss.isValid(s);
    cout<<r<<endl;


return 0;
}
