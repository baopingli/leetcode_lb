#include<iostream>
#include<string>
using namespace std;
//
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        if(word[0]>='a')
        {
            for(auto x:word)
            {
                if(x<'a')
                    return false;
            }
        }
        else
        {
            if(word[1]>='a')//ะกะด
            {
                for(int i=1;i<n;i++)
                {
                    if(word[i]>='a');
                    else
                        return false;
                }
            }
            else//ด๓ะด
            {
                for(int i=1;i<n;i++)
                {
                    if(word[i]>='a')
                        return false;
                }
            }

        }
        return true;

    }
};
int main()
{
    cout<<'a'-'A'<<endl;

    return 0;
}
