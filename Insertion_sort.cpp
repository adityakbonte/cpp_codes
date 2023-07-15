#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,4,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionsort(arr,n);
    
    return 0;
}
