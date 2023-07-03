#include <bits/stdc++.h>
using namespace std;

void firstandlastocc(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"first occurance: "<<i<<endl;
            break;
        }
    }
    for(int i=n;i>=0;i--){
        if(arr[i]==key){
            cout<<"last occurance: "<<i<<endl;
            break;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,2,5,2,2,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    firstandlastocc(arr,n,2);
    return 0;
}
