#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={2,1,4,5,3,10};
    int n=arr.size();

    for(int i=1;i<n;i++){
        int j=i;
        while(j>0){
            if(arr[j]<arr[j-1]) {
                swap(arr[j-1],arr[j]);  
                j--; 
            }
            else break;                  
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}