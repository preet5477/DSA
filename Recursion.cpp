#include<iostream>
using namespace std;

//1.Factorial
// int Fact(int n){
//     if (n==0) return 1;   
//     return n * Fact(n-1);
// }
// int main(){
//     int n=5;
//    int fact= Fact(n);    
//         cout<<"Fact="<<fact; 
// }

//2.Pover of
// int Pov(int n,int n1,int n2){    
//     if (n1==1) cout<<n;   
//     return Pov(n2*n,n1-1,n2);
// }
// int main(){
//     int n=2,n1=12;
//          Pov(n,n1,n);    
// }

//3..Fibonnacci
// int Fibonna(int n,int n1,int n2){
//     if (n==0) return 1; 
//         cout<<n1<<" .";        
//         return Fibonna(n-1,n2,n1+n2);
// }
// int FinoOptimal(int n){
//     if(n==0)return 0;
//     if(n==1)return 1;
//     return FinoOptimal(n-1)+FinoOptimal(n-2);
// }
// int main(){
//     int n=10;
//     Fibonna(n,0,1);
//     cout<<"Final otp :"<<FinoOptimal(n-1);    
// }


//4.coding ninja(Count Ways To Reach The N-th Stairs)
int countDistinctWays(int nStairs) {
    if(nStairs<0) return 0;
    if(nStairs==0)return 1;
    return countDistinctWays(nStairs-1)
    +countDistinctWays(nStairs-2);
}
int main(){
    int n=5;
    int n1=countDistinctWays(n);
    cout<<"ans="<<n1;
}