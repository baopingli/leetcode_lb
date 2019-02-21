#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
	    int result=0;
	    int len=nums.size();
	    sort(nums.begin(),nums.end());
	    for(int i=0;i<len;i+=2)
	    {
		    result+=nums[i];
	    }
	    return result;
    }
};
using namespace std;
int main()
{
	vector<int> x;
	x={1,4,3,2};
	Solution s;
	int r=s.arrayPairSum(x);
	cout<<r<<endl;
	cout<<"hello world"<<endl;
	return 0;
}
