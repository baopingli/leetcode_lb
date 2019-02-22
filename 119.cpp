#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
          vector<int> temp;
        vector<int> ttemp;
        for(int i=0;i<rowIndex+1;i++)
        {

            ttemp=temp;
            for(int j=1;j<temp.size();j++)
            {
                temp[j]=ttemp[j]+ttemp[j-1];

            }
            temp.push_back(1);


        }
        return temp;
    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
