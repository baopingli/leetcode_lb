#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
	    if(nums.size()==0||nums.size()*nums[0].size()!=r*c)
		    return nums;
	    vector<int> temp;
	    for(int i=0;i<nums.size();i++)
	    {
		    for(int j=0;j<nums[i].size();j++)
		    {
			    temp.push_back(nums[i][j]);
		    }
	    }
	    vector<vector<int>> result;
	    for(int i=0;i<r;i++)
	    {
		    vector<int> ttemp;
		    for(int j=0;j<c;j++)
		    {
			    ttemp.push_back(temp[c*i+j]);
		    }
		    result.push_back(ttemp);
	    }
	    return result;
    }
};
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
            int m=nums.size();
            int n=nums[0].size();
        if(m*n!=r*c)
            return nums;
        vector<vector<int>> result(r,vector<int>(c));
        int x=0,y=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(y>=c)
                {
                    y=0;
                    x++;
                }
                if(x>=r)
                    return result;
                result[x][y++]=nums[i][j];
            }
        }
        return result;
    }
};

int main()
{
	cout<<"hello world"<<endl;
	return 0;
}
