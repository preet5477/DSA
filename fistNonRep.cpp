#include<iostream>
using namespace std;

int main(){
    int n=6;
    int a[6]={5,4,2,2,4,5};
    for(int i=0;i<n;i++){
        int j;  
        for( j=0;j<n;j++){
            if(a[i]==a[j] && i!=j)break;
        }
        if(j==n){
            cout<<a[i]<<endl;
            break;
          }
    }
    return 0;
}