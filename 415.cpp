#include<iostream>
#include<string>
using namespace std;
//对字符串相加但是不将其转换成整数。
//直接对字符串进行操作
class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum=0,i=num1.length()-1,j=num2.length()-1;
        string str;
        while(i>=0||j>=0||sum>0)
        {
            if(i>=0) sum+=(num1[i--]-'0');
            if(j>=0) sum+=(num2[j--]-'0');
            str.insert(0,1,(sum%10)+'0');//在0前面插入1字符.
            sum/=10;
        }
        return str;
    }
};
int main()
{
    return 0;
}
