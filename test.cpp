#include <bits/stdc++.h>
using namespace std;

int main() {
    int j=0;
    vector<int> a={1,2,3,4,5,6,7};
    vector<int> b=a;
    int n=a.size(),k=3;
    for(int i=0;i<n;i++){
        if(i<k){
            a[i]=b[n-k+i];
        }else{
            a[i]=b[j];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ,";
    }
}   
