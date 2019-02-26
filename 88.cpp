#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m;i<n+m;i++)
        {
            nums1[i]=nums2[i-m];
        }
        return sort(nums1.begin(),nums1.end());
    }
};
int main()
{

    cout<<"hello world"<<endl;
    return 0;
}
