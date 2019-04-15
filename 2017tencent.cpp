#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int helper(string s)
{
    string rev=s;
    reverse(rev.begin(),rev.end());

}
int main(){
    while(cin>>s)
    {
        cout<<helper(s)<<endl;
    }
    cout<<"hello world"<<endl;
    return 0;
}
