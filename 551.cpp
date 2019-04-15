#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool checkRecord(string s) {
        int numofA=0;
        int numofLLL=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
                numofA++;

            if(s[i]=='L')
                numofLLL++;
            else
                numofLLL=0;
           if(numofA>1||numofLLL>2)
            return false;
        }

        return true;

    }
};
int main()
{

    return 0;
}
