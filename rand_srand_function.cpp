#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    // rand()   ( function directly gives the random number but it give same random number every time for same range or etc )

    // to remove this problem we have to use srand() and inside it we provide parameter which every time changes like current time

    srand(time(0));
    cout<<"random number are: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<rand()%10<<" ";     // this %10 means it it divide randim number by 10 an then show remainder at output and 10 is the range of the number 0 to 10 the numbers are from this range only.
    }
    
    return 0;
}
