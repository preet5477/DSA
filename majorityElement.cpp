#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={2,2,1,1,1,2,2};
    int c1=0,c2=0,grat=0;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
        if(v[i]==v[j]){
           c1++;
        }
    }
    if(c1>c2){
        c2=c1;
        grat=v[i];
    }
    c1=0;
}
cout<<grat;
return 0;
}