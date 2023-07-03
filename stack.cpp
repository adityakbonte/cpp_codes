#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#include <stack>
int main() {
    // create a stack of strings
    stack<string> languages;
    
    // add element to the Stack
    languages.push("C++");
    languages.push("Java");
    languages.push("Python");

    // print top element
    cout << languages.top()<<endl;
    
    // pop the element from the stack
    languages.pop();
    cout<< languages.top();
    
    // print elements of stack
   while(!languages.empty()) {
    cout << languages.top() << ", ";
    languages.pop();
  } 
    return 0;
}