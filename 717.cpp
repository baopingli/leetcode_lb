#include<iostream>
#include<vector>
using namespace std;
class Solution {
    //遇到0  加1 遇到1 加2
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        int i=0;
        while(i<n-1)
        {
            if(bits[i]==0)
                i++;
            else
                i+=2;
        }
        return i==n-1;

    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
