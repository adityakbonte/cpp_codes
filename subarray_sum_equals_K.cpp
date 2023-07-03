#include <bits/stdc++.h>
using namespace std;

int subarray_sum_equals_k(vector<int>v,int k){
    int sum=0;
    int subarray=0;
    map<int,int>m;
    m[0]++;
    for(int i=0;i<v.size();i++){
        sum += v[i];
        if(m[sum-k]){
            subarray += m[sum-k];
        }
        m[sum]++;
    }
    return subarray;
}

int main(int argc, char const *argv[])
{
    vector<int>v{1,1,1,1,1};
    int k = 2;
    int ans = subarray_sum_equals_k(v,k);
    cout<<"subarray sum equals k: "<<ans;

    return 0;
}
