#include <bits/stdc++.h>
using namespace std;

int subarray_sum_equals_k(vector<int>v,int k){
    int size = v.size();
    int count=0;

    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=v[j];
            if(sum==k){
                count++;
            }
            // cout<<"array is :";     
            for(int k =i;k<=j;k++){      // this loop is for displaing the each array
                cout<<v[k]<<" ";
            }
            cout<<endl;
            
            // cout<<sum<<" ";      // this is for printitn the sum of all subarrays   
        }
        
    }
    return count;
}

int main(int argc, char const *argv[])
{
    vector<int>v{2,8,9};
    int k = 2;
    int ans = subarray_sum_equals_k(v,2);
    cout<<"subarray sum equals k: "<<ans;

    return 0;
}
