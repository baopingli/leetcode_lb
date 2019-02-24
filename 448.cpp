#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=n+1)
                result.push_back(n+1);
        }
        return result;
    }
};
class Solution1 {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> us;
        unordered_set<int> us1;
        vector<int> result;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            us.insert(nums[i]);
            us1.insert(i+1);


        }
        auto xx=set_difference(us1.begin(),us1.end(),us.begin(),us.end(),result.begin());
        result.resize(xx-result.begin());
        return result;
    }
};
//这个是看的别人的算法，很厉害：相当于根据出现的值做标记，那么没有标记的位置就是里面没有的元素。
class Solution3 {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int idx=abs(nums[i])-1;
            nums[idx]=(nums[idx]>0)? -nums[idx]:nums[idx];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                res.push_back(i+1);
            }
        }
        return res;

    }
};
int main()
{
    int x=(1>0)? 5:6;
    cout<< abs(1)<<endl;
    cout<<x<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
