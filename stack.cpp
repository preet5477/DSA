// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <stack> 
#include<string>

using namespace std;
int main() {
string v="{()}";
    stack <char> stk;
  for(int i=0;i<v.length();i++){
     if(v[i]=='{' || v[i]=='(' || v[i]=='[' ){
          stk.push(v[i]);
      }
     else{
     /// if(v[i]=="}" || v[i]=="]"  || v[i]==")"){
        //  if(stk.top())
       // cout<<stk.top();
     }
  }
       //cout<<stk.top()<<endl;
       cout<<"HELLO";
     // }
    return 0;
}