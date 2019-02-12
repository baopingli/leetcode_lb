#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
class Solution {
public:
	//超出时间限制，可以从K上下手
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
	    if(points.size()<=K)
		    return points;
	    vector<vector<int>> temp;
	    vector<vector<int>> result;
	    for(int i=0;i<points.size();i++)
	    {
		    vector<int> x;
		    x.push_back(i);
		    x.push_back(pow(points[i][0],2)+pow(points[i][1],2));
		    temp.push_back(x);
	    }
	   /* for(int i=0;i<K;i++)
	    {
		    for(int j=i+1;j<temp.size();j++)
		    {
			    if(temp[j][1]<temp[i][1])
			    {
				    vector<int> ttemp;
				    ttemp=temp[i];
				    temp[i]=temp[j];
				    temp[j]=ttemp;
			    }
		    }
		    result.push_back(points[temp[i][0]]);
	    }*/
	    //for(int i=0;i<K;i++)
	    //{
	//	    result.push_back(points[temp[i][0]]);
	  //  }
	  sort(temp.begin(),temp.end());
	  for(int i=0;i<K;i++)
	  {
		  result.push_back(points[temp[i][0]]);
	  }
	    return result;

    }
};
//sort函数，里面可以自定比较的规则是什么，对于vector和sort要理解的更深一些。
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
       sort(points.begin(),points.end(),cmp);
        return vector<vector<int>>(points.begin(),points.begin()+K);

    }
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        return (pow(a[0],2)+pow(a[1],2)) <(pow(b[0],2)+pow(b[1],2));
    }
};
int main()
{
	vector<vector<int>> points;
	points={{3,3},{5,-1},{-2,4}};
	Solution s;
	vector<vector<int>> result;
	result=	s.kClosest(points,2);
	for(int i=0;i<result.size();i++)
	{
		cout<<result[i][0]<<' '<<result[i][1]<<endl;
	}
	//cout<<"hello world!"<<endl;
	return 0;
}
