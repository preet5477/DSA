#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


int SayDigit(int n){
    if(n==0) return 0;
    unordered_map<int,string> di={
        {0,"zero"}, {1,"one"}, {2,"two"},
        {3,"three"},{4,"four"},{5,"five"},
        {6,"six"},  {7,"seven"},{8,"eight"},
        {9,"nine"}
    };

    SayDigit(n/10); 
    cout<<di.at(n%10)<<"  ";

}
int main(){
    int n=1234089;    
    int say=SayDigit(n);
   
}