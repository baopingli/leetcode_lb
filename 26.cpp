#include<iostream>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int index=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[index])
            {
                index++;
                nums[index]=nums[i];

            }
        }
        return index+1;
    }
};
int main()
{

    cout<<"hello world"<<endl;
    return 0;
}
