#include<iostream>
#include<math.h>
#include<vector>
#include<climits>
#include<map>
using namespace std;
int main(){

 //---operateor   
    // int a=4 ;
    // int b=6;
    // cout<<"a&b= "<<(a&b)<<endl;
    // cout<<"a|b= "<<(a|b)<<endl;
    // cout<<"~a= "<<~a<<endl;
    // cout<<"a^b= "<<(a^b)<<endl;
    // cout<<--a<<endl;//pre
    // cout<<++a<<endl;
    // cout<<a--<<endl;//post
    // cout<<a++<<endl;
    // cout<<a;
    // for(int a=10,b=0,c=2,d=1,e=-5;a!=0;a--,b++){
    //     cout<<"Hello a+b = "<<a+b+c+d+e<<" a = "<<a<<"b= "<<b<<endl;
    // }

 //--fabona---0,1,1,2,3,5,8,13
    // int a=0;int b=1 ;int n=10;
    // for(int i=0;i<n;i++){
    //     cout<<"a="<<a<<"b="<<b<<endl;
    //    int z=a;
    //    a=b;
    //    b=b+z; 
    // }
  
//Prime or not----------------
// int n;
// int flag=0;
// cout<<"Enter no:";
// cin>>n;
// if(n>1){
// for(int i=2;i<n/2;i++){
//     if(n%i==0){
//         flag=1;
//         break;
//     }
// }
// }else{
//     flag=-1;
//     cout<<"Please enter corrent no.";
// }
// if(flag==1){
//     cout<<"Not prime";
// }else if(flag==0){
//     cout<<"Prime";
// }

//---que;;
//--1.
// for(int i=0;i<=5;i++){
//     cout<<i<<" ";
//     i++;
// }//---0 2 4
//--2
// for(int i=0;i<=5;i++){
//     cout<<i<<" ";
//     i++;
// }//---00000000in infinite..
//-3.
// for(int i=0;i<=15;i+=2){
//     cout<< i <<" ";
//     if(i&1){
//       //  cout<<"(if)i & 1 = "<<(i&1)<<endl;
//         continue;
//     }
//     else{
//        // cout<<" else) i & 1 = "<<(i&1)<<endl;
//     i++;
//     }
//}
//--4.
// for(int i=0;i<5;i++){
//     for(int j=i;j<=5;j++){
//         cout<<i<<" "<<j<<endl;
//     }
// }
//--5.
// for(int i=0;i<5;i++){
//     for(int j=i;j<=5;j++){
//       if((i+j)==10)break;
//         cout<<i<<" "<<j<<endl;
//     }
// }

//----sumb the product and sum of a number=
// int n=234;
// int n1=n;
// int prod=1;
// int sum=0;
// while(n1!=0){
// prod*=(n1%10);
// sum +=n1%10;
// n1/=10;
// }
// cout<<"product="<<prod<<endl;
// cout<<"sum="<<sum<<endl;
// cout<<"subtract="<<prod-sum;

//---Dec to binary
//..1.
// int i=1,n=5;
// while(i<=n){
// int n,n1;
// n=n1=i;int c=0;
// int temp=0;
//    while(n1!=0){
//       if(n1%2==0)temp=(temp*10)+0;
//       else temp=(temp*10)+1;
//       n1/=2;c++;
//    }
//    int k=0;
//    for(int i=0;i<c;i++){
//       k=(k*10)+temp%10;
//       temp/=10;
//    }
// cout<<"the binary of "<<n<<"is : "<<k<<endl;
// i++;
// }
//--2(optimal solution )
// int n,n1;
// n=n1=4;
// int i=0;int binary=0;
// while(n!=0){
//     int bit=n&1;
//     binary=(bit *pow(10,i))+binary;
//     n=n>>1;
//     i++;
// }
// cout<<"Binaruy of number "<<n1<<" = "<<binary;

//binary to decimal
// int n,n1;
// cout<<"value=";
// cin>>n;
// n1=n;
// int ans=0;
// int i=0;
// while(n!=0){
//    int n2= n%10;
//     ans=((pow(2,i))*n2)+ans;
//     n=n/10;
//     i++;
// }
// cout<<ans;

//Reverse int
// int n,n1=123; 
// long k=0;
// while(n1!=0){
//    int dig=(n1%10);
//    if(k>INT_MAX/10 || k<INT_MAX/10) return 0;
//    k=(k*10)+dig;
//    cout<<"value of k = "<<k<<" value of n1%10 = "<<n1%10<<endl;
//    n1/=10;
// }
// cout<<k;

//Complement of base 10
// int n,n1,nn=0;
// n1=n=5;int i=0,newN=0;
// while (n1!=0){
// newN=((pow(2,i))*((n1&1)^1))+newN;
// n1=n1>>1;
// i++;
// }

//pov of 2
//1..
// int n=1;
// int n1=0 ,i=0;
// while(n1<n || i<32){
//    n1=pow(2,i);
//    if(n1==n) cout<<"pov";
//    i++;
// }
// if(n1>n || i>32)cout<<"not";
//2..
// int n=16;int s=0;
// while(n!=0){
//   s= n&1;
//    n=n>>1;
// }
// if(s==1){
//    cout<<"pov of 2";
// }
// else{
//    cout<<"Not a pov of 2";
// }

//=
// int n=9,i=0,bin=0;
// while(i<n){
//      int n=i;
//       int dig=0;int binary=0;
//       while(n!=0){
//          int bit=n&1;
//          binary=(bit *pow(10,dig))+binary;
//          n=n>>1;
//          dig++;
//     }
//       cout<<"val i = "<<i<<"bind="<<binary<<endl;
//       i++;
// }

//find dublicate;
// int arr[5]={4,2,3,1,1};
// int ans=0;
// for(int i=0;i<5;i++){
// ans=ans^arr[i]; 
// //cout<<ans<<endl;
// }
// for(int i= 1;i<5;i++){
//    ans=ans^i;
// }
// cout<<ans;

// find all duplicate
// vector<int> v={2, 1 ,2 ,2 };
// map<int,int>dup;
// for(int i=0;i<v.size();i++){
//    if(v[i]!=-1){
//       for(int j=i+1;j<v.size();j++){
//          if(v[j]!=-1){
//             if(v[i]==v[j]){
//                dup.insert({v[i],v[i]});
//                v[j]=-1;
//             }
//          }
//       }
//    }
// }
// for(auto pe: dup){
//    cout<<pe.first<<endl;
// }
//-Optimal solution o(1);
vector<int> nums={2, 1 ,2 ,2 };
 vector<int> n(nums.size() + 1, 0);
 vector<int> ans;
   for(auto num : nums)
   {
      if(n[num] > 0)
      {
            ans.push_back(num);
      }
      else
      {
            ++n[num];
      }
   }
   for(int i=0;i<ans.size();i++){
         cout<<"nums="<<ans[i];
   }
}