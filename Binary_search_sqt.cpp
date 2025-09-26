using namespace std;
#include<iostream>
int main(){
     long long int n=4,ans=0;
   long long int m=0,s=0, e=n-1;
    while(s<=e){
        m=s+(e-s)/2;
       // mid = s+(e-s)/2;//Optimal...           
        long long int sr=m*m;
        cout<<"sr"<<sr<<endl;
        if(sr==n){
            ans= m;
            cout<<"Square root of"<<n <<" is : "<<m;
            break;
        }
        else if(sr>n){
            e=m-1;
        }else{
            s=m+1;
        }
    }
    ans= e;
    cout<<"Square root of"<<n <<" is : "<<ans;
}