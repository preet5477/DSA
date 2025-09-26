#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6,7,9,10,11,22,11,10,9,8,7,6,5,4,2};
    //int n=20;
    //int s=0,e=arr.size()-1,m=0;
    // while(s<=e){
    //     m=s+(e-s)/2;
    //     if(arr[m]>arr[m-1]){
    //         if(arr[m]>arr[m+1]) {
    //             cout<<"Ans = "<<m; 
    //             break;
    //         }
    //         else s=m+1;
    //     }
    //     else e=m-1;
    // }

  int m=0, s=0,e=arr.size()-1;        
      while(s<=e){
        m=s+(e-s)/2;
            if(arr[m]>arr[m-1]){
                if(arr[m]>arr[m+1]) {
                    return m; 
                    break;
                }
                else
                { 
                    s=m+1;
                }
            }
          else{
            e=m-1;
          }
     }
}
