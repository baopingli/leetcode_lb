#include<iostream>
#include<vector>
using namespace std;
//这个方法比较慢
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for(int i=0;i<numbers.size();i++)
        {
            for(int j=i+1;j<numbers.size();j++)
            {
                if(numbers[i]+numbers[j]==target)
                {
                    result.push_back(i+1);
                    result.push_back(j+1);
                    return result;
                }

            }
        }
        return result;
    }
};
//从头尾开始向中间移动直到两个数的和等于target
class Solution1 {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int low=0;
        int high=n-1;
        int sum=0;
        vector<int> result;
        while(low<high)
        {
            sum=numbers[low]+numbers[high];
            if(sum==target)
            {
                result.push_back(low+1);
                result.push_back(high+1);
                return result;
            }
            else if(sum>target)
            {
                high--;
            }
            else
                low++;

        }
        return result;

    }
};
int main()
{
    cout<<"hello world"<<endl;
    return 0;
}
