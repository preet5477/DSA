#include <bits/stdc++.h>
using namespace std;

//const int N=1e7+10;
const int N=100;
vector<bool> isPrime(N,1);

int main(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=0;i<100;i++){
        if(isPrime[i]==true) cout<<i<<endl;
    }

    // int q;
    // cin>> q;
    // while(q--){
    //     int n;
    //     cin>>n;
    //     if(isPrime[n]) cout<<"Prime "<<n<<endl;
    //     else cout<<"Not Prime "<<n<<endl;
    // }

}