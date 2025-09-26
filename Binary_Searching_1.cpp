#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int> arr={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
        int n=arr.size();
        int s=0,e=n-1,mid=0,key=19,f=0;
        //for(int i=0;i<n/2;i++){
        while(s<=e ){
           // mid=(s+e)/2;//error(out of range) if e=2^31-1,s=2^31-1;
            mid = s+(e-s)/2;//Optimal...
            cout<<"mid="<<mid<<"---";
            if(arr[mid]==key) {
                cout<<"(Found) index ="<<mid;
                f=1;break;
            }
            else if(arr[mid]>key){ //if mid is grater than key value then
                    e=mid-1;//end is mid-1;Left part;                    
                    cout<<"grater=  E="<<e <<"  = s="<<s<<endl;
            }
            else{//if mid is less then key value then right part
                s=mid+1;//then start is mid + 1;
                cout<<"small=  E="<<e <<"  = s="<<s<<endl;
            } 
        }
        if(f==0)cout<<"not found";
}