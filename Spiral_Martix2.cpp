using namespace std;
#include<iostream>
#include<vector>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int start,count;
     start=count=0;
    int end=3;
    
    while(count<9){
        for(int index=start;index<end;index++){
            cout<<arr[start][index];
            count++;
        }
        for(int index=start;index<end;index--){
            cout<<arr[index][start];
            count++;
        }
        for(int index=start;)
    }
    