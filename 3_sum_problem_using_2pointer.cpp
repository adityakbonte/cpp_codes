#include <bits/stdc++.h>
using namespace std;

int main()
{
    int target = 20;
    int arr[] = {2,4,8,1,9,5};
    int n =  sizeof(arr)/sizeof(arr[0]);
    // 1st make the array sorted;
    sort((arr),(arr+n));
    //use of for loop inside while loop for loop i is the fixed one value and other two values are changing so this is called 2 pointer approch
    bool found = false;
    for(int i=0;i<n;i++){
        int lower=i+1;
        int high=n-1;
        while(lower<high){
            int current_sum = arr[i]+arr[lower]+arr[high];
            if(current_sum==target){
                found = true;
            }
            if(current_sum<target){
                lower++;
            }
            else{
                high--;
            }
        }
        
    }
    if(found){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    return 0;
}
