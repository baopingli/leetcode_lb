#include<iostream>
#include<vector>
using namespace std;
class Solution1 {
public:
    vector<vector<int>> generate(int numRows) {
	    vector<vector<int>> result;
	    result.push_back({1});
	 for(int i=1;i<numRows.size();i++)
	 {
		 vector<int> temp;
		 temp.push_back(1);
		 for(int j=1;j<numRows.size()-1;j++)
		 {
			 
			 temp.push_back(result[i-1][j]+result[i-1][j-1])
		 }
		 temp.push_back(1);
		 result.push_back(temp);
	 }
	 return result;
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
	    vector<vector<int>> result;
	for(int i=0;i<numRows;i++)
	{
		vector<int> temp;
		for(int j=0;j<=i;j++)
		{
			int x=fun(i,j);
			temp.push_back(x);
		}
		result.push_back(temp);

	}		
	return result;
    }
    int fun(int i,int j)
    {
	    if(j==0||j==i)
		return 1;
	    else
		return fun(i-1,j-1)+fun(i-1,j);	    
		   
    }
};
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> temp;
        for(int i=0;i<numRows;i++)
        {
            temp.push_back(1);
            vector<int> ttemp;
            ttemp=temp;
            for(int j=1;j<temp.size()-1;j++)
            {
                ttemp[j]=temp[j]+temp[j-1];
            }
            result.push_back(ttemp);
            temp=ttemp;
        }
         return result;
    }
};
int main()
{
	cout<<"hello world"<<endl;
	return 0;
}
