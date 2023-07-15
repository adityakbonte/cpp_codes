#include <bits/stdc++.h>
using namespace std;

void pattern13(int N)
{
      int num =1;
      
      for(int i=1;i<=N;i++){
          
          
          for(int j=1;j<=i;j++){
              cout<<num<<" ";
              num =num+1;
          }
         
          cout<<endl;
          
      }
      for(int i=N;i>0;i--){
          
          
          for(int j=N;j>;j--){
              cout<<num<<" ";
              num =num-1;
          }
         
          cout<<endl;
          
      }
}

int main()
{   
    
    int N = 4;
    pattern13(N);

    return 0;
}