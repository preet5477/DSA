#include<iostream>
using namespace std;
        
        int fstAccur(int arr[],int n,int key){
            int s=0,e=n-1;
            int mid =0;
            int ans=-1;
        while(s<=e ){
                mid = s + (e-s) / 2;
                // cout<<"mid="<<mid<<"---";
                    if(arr[mid]==key) {
                        ans=mid;
                        e=mid-1;//For left
                    }
                    else if(key<arr[mid]){
                            e=mid-1;
                        //  cout<<"small=  E="<<e <<"  = s="<<s<<endl;
                        } 
                    else if(key>arr[mid]){
                            s=mid+1;          
                            //cout<<"grater=  E="<<e <<"  = s="<<s<<endl;
                        }
                    
                    }
                    return ans;
        }

        int lstAccur(int arr[],int n,int key){
            int s=0,e=n-1;
            int mid =0;
            int ans=-1;
        while(s<=e ){
                mid = s + (e-s) / 2;
                    if(arr[mid]==key) {
                        ans=mid;
                        s=mid+1;//for right
                    }
                    else if(key<arr[mid]){
                            e=mid-1;
                        } 
                    else if(key>arr[mid]){
                            s=mid+1;          
                        }
                    
                    }
                    return ans;
        }
int main(){
        int arr[11]={0,1,2,3,3,3,3,8,8,9,10},n=11;
        int key=3;
        int fist= fstAccur(arr,n,key);
       int last= lstAccur(arr,n,key);
        cout<<"First = "<<fist<<endl<<"Last = "<<last;       
}