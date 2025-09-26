#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    //factor.sum and count
    // int n,c=0,s=0;
    // cin>>n;
    // for(int i=1;i*i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" " <<n/i<<endl;
    //         c++;
    //         s+=i;
    //         if(n!=n/i){
    //        // cout<<n/i<<endl;
    //         c++;
    //         s+=n/i;
    //         }
    //     }
    // }cout<<"sum="<<s<<endl;
    // cout<<"count="<<c;
   
    vector<int> v={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int temp2=1,size=v.size();
    int temp1=2;
    
    // for(int i=0;i<3;i++){
    //     for(int j=1;temp1*j<=v[size-1];j++){ 
    //        // cout<<v[(temp1*j)-1]<<endl;        
    //         v.erase(v.begin()+((temp1*j)-1));
    //     }
    //     int t=temp2+temp1;
    //     temp2=temp1;
    //     temp1=t;
    //  }

    //find prime
    int n1=2,n2=3,n3=5,i=2;
    while((i*n1<=19 )){
       // cout<<"i*n1=="<<i<<"*"<<n1<<"="<<i*n1<<endl;
         v.erase(remove(v.begin(), v.end(), i*n1), v.end());
      //  cout<<"i*n2=="<<i<<"*"<<n2<<"="<<i*n2<<endl;
         v.erase(remove(v.begin(), v.end(), i*n2), v.end());
      //   cout<<"i*n3=="<<i<<"*"<<n3<<"="<<i*n3<<endl;
         v.erase(remove(v.begin(), v.end(), i*n3), v.end());
         i++;
    }
     for(int i=0;i<v.size();i++){
        cout<<"v="<<v[i]<<endl;
     }
}