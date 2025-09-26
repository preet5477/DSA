#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    vector<int> arr= { 10, 42, 22, 23,16, 18, 19, 20, 21,  24, 33, 12, 13, 35, 47 };
    int n=arr.size();
    int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                c++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"count="<<c;
}