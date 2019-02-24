#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> res;
        int diff=(accumulate(A.begin(),A.end(),0)-accumulate(B.begin(),B.end(),0))/2;
        //unordered_set<int> S(A.begin(),A.end());
        unordered_set<int> s;
        for(int i=0;i<A.size();i++)
        {
            s.insert(A[i]);
        }
        for(int b:B)
        {
            if(s.count(b+diff))
            {
                res.push_back(b+diff);
                res.push_back(b);
                return res;
            }

        }
        return res;
    }
};
int main()
{
    vector<int> x;
    x={1,2,3,4};
    int r;
    r=accumulate(x.begin(),x.end(),0);
    cout<<r<<endl;
    cout<<"hello world"<<endl;
    return 0;
}
