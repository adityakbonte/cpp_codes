#include <bits/stdc++.h>
using namespace std;

int subarraysum(vector<int>v){
    int sum = 0;
        int maxi = INT_MIN;
        for(int i=0;i<v.size();i++){
            sum += v[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
    return maxi;
}

int main(int argc, char const *argv[])
{
    vector<int>v{-2,-3,-1,-5 ,2};
    int ans = subarraysum(v);
    cout<<"max sum is: "<<ans;
    return 0;
}
