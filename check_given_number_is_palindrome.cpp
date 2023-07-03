#include <bits/stdc++.h>
using namespace std;

void checkpalindrome(int num){
    int temp = num;
    int reverse = 0;
    while(num>0){
        reverse = reverse*10 +num%10;
        num = num/10;
    }
    if(temp==reverse){
        cout<<"Given number is palindrome!";
    }
    else{
        cout<<"It is not palindrome!";
    }
}

int main(int argc, char const *argv[])
{
    int num =22;
    checkpalindrome(num);
    return 0;
}
