using namespace std;
#include<iostream>
int main(){
    int n=25;    
    int ans=0;
    int m=0,s=0,e=n/2;
    while(s<=e){
        m=s+(e-s)/2;
        int sr=m*m;
        if(sr==n){
            ans= sr;
        }
        else if(sr>n){
            e=m-1;
        }else{
            s=m+1;
        }
    }
    ans= s;
    cout<<"Square root of"<<n <<" is : "<<ans;
}

