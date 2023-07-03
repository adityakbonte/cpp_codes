#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==b){
        return a;
    }
    int smaller = min(a,b);
    int larger = max(a,b);
    int remainder = larger%smaller;

    if(remainder==0){
        return smaller;
    }
    return gcd(smaller, remainder);
}

int main()
{
    cout<<"Enter two number : ";
    int a,b;
    cin>>a;
    cin>>b;
    cout<<"GCD of 2 numbers is: "<<gcd(a,b);
    return 0;
}
