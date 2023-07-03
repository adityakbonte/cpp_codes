#include <bits/stdc++.h>
using namespace std;

//Q1
bool is_sorted(int arr[],int n){
    if(n==1){
        return true;
    }

    // this recurrsion is not satisfy the condition of a[]={2,2,2,2}, thie sorted but this recurrsion gives the ans false.
    bool restArray = is_sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

//Q2
void dec(int a){
    if(a==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<a<<" ";
    dec(a-1);
}

//Q3
int first_occurance(int arr1[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(i==key){
        return i;
    }
    return first_occurance(arr1,n,i+1,key);
}

int main(int argc, char const *argv[])
{
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    // q1. to check the given array is sorted or not using recurrsion;
    cout<<is_sorted(arr,n)<<endl;

    int a = 5;
    // q2. print the decrsing number from 5 like , 5,4,3,2,1 using recurrsion
    dec(a);

    // q.3 find the 1st and last occurance of the number in an array
    int arr1[] = {1,2,4,3,2,5,2,9};
    cout<<first_occurance(arr1,n,0,2)<<endl;
    // last_occurance();
    return 0;
}
