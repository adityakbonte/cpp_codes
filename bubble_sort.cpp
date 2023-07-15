#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(int argc, char const *argv[])
{
    int arr[] = {1,4,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,n);
    return 0;
}
