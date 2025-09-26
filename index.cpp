#include<iostream>
using namespace std;

void threeGrat(int a[]){
    

}
int main(){
    int n,targ;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter targe value";
    cin>>targ;
    for(int i=0;i<n-2;i++){
       // int count=0;
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==targ){
                    cout<<"{"<<i<<","<<j<< ","<<k<<"}"<<endl;
                }
              }
        }
    }
    return 0;
}