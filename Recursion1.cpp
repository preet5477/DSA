#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int SumOfArray(int *arr,int s,int sum){
    if(s<0) return sum;
    int s1=sum+arr[s];
    SumOfArray(arr,s-1,s1);
}


int SortOrNot(int *arr,int s){
    if(s<1) return 1;
    if(arr[s]<arr[s-1]) return false;  
    SortOrNot(arr,s-1);
}

int LinearSearch(int *arr,int s,int key){
    if(s<0) return -1;
    if(arr[s]==key) return s;
    LinearSearch(arr,s-1,key);
}

int BinarySearch(int *arr,int key,int s,int e){    
    if(s>e)return -1;
    int m=s-(s-e)/2;    
    if(arr[m]==key) {
        int index=m;
        return index;
    }
    if(key>arr[m]) BinarySearch(arr,key,m+1,e);
    else BinarySearch(arr,key,s,m-1);
    }
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9},size=10;
    int sum=0;

   // bool ans= SortOrNot(arr,size-1);    
    //cout<<"ans="<<ans;

    // int Sum = SumOfArray(arr,size-1,sum);
    //cout<<"sum="<<Sum;

    // int key=91;
    // cout<<"index = "<<LinearSearch(arr,size-1,key);

    int key=7,start=0,end=size-1;
    cout<<"index="<<BinarySearch(arr,key,start,end);
}