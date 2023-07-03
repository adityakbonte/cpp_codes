#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans =1.0;
        if(n==0){
            return 1;
        }
        else if(n<0){
            x= 1/x;
            for(int i=abs(n);i>0;i--){
                ans = ans* x;
            }
        }
        else{
            for(int i=0;i<n;i++){
            ans = ans* x;
            }
        }
        
        return ans;
    }
};

/*
2.000
-2

n<0

x = 1/2


*/

int main(int argc, char const *argv[])
{   
    Solution a;

    cout<<a.myPow(2.0000,-2)<<setprecision(3);
    return 0;
}
