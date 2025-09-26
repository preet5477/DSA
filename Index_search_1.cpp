#include<iostream>
#include <vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int size=arr.size(),key=19,i=0;
    int  l=0,jump=sqrt(size);
    if(arr[0]>key || arr[size-1]<key){
            cout<<"out of range"<<endl;
    }
    else{
    while( i<size){
        l++;
        cout<<"arr[i]="<<arr[i]<<endl;
        if(arr[i]==key){
            cout<<"found in == condito = "<<i<<endl;break;
        }
        else if(arr[0]>key || arr[size-1]<key){
            cout<<"out of range"<<endl;break;
        }
        else if(arr[i]<key){
            cout<<"int increment ="<<i<<endl;
             i=i+jump;//if key is grater than i =i+4
        }
        else{
            for(int j=i-1;j>i-4;j--){
                l++;
                cout<<"in for loop = "<<j<<endl;
                if(arr[j]==key){
                    cout<<"found in for lo0p= "<<j<<"="<<arr[j]<<endl;
                    break;
                  }
            }
            break;
        }
    }
}
cout<<"loop="<<l;
    
}