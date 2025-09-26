#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={8,22,7,9,31,5,13};int c=0;
    bool swp=false;
    for(int i=arr.size()-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swp=true;c++;
            }
             
        }
        if(swp==false)break;
    }
    for(int i=0;i<arr.size();i++){
        cout<<" "<<arr[i];
    }
    cout<<endl<<"coutn = "<<c;
}