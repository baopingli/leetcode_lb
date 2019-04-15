#include<iostream>
#include<string>
using namespace std;
//忘了考虑3 4 7旋转之后什么都不是的情况
class Solution {
public:
    int rotatedDigits(int N) {
        int x=N/10;
        int y=N%10;
        if(y>=9)
            return x*4+4;
        else if(y>=6)
            return x*4+3;
        else if(y>=5)
            return x*4+2;
        else if(y>=2)
            return x*4+1;
        return x*4;
    }
};
class Solution1 {
public:
    int rotatedDigits(int N) {
         int res=0;
        //                    0,1,2,3,4,5,6,7,8,9
        vector<int> musthave={0,0,1,0,0,1,1,0,0,1};
        vector<int> canthave={0,0,0,1,1,0,0,1,0,0};
        for(int i=1;i<=N;i++)
        {
            int m=0;
            int c=0;
            int temp=i;
            while(temp)
            {
                int digit=temp%10;
                if(canthave[digit])
                {
                    c++;
                    break;
                }
                if(musthave[digit])
                {
                    m++;
                }

                temp=temp/10;
            }
            if(c) continue;
            if(!m) continue;
            res++;

        }
        return res;
    }
};
int main(){

    return 0;
}
