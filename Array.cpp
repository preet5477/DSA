using namespace std;
#include<iostream>
#include<vector>
#include<unordered_map>
#include <bits/stdc++.h>
int main()
{
    //-----sum of arrray
    // int arr[5]={1,2,3,4,5};
    // int n=0;
    // for(int i=0;i<5;i++){
    //     n +=arr[i];
    // }
    // cout<<"sum="<<n;

    //--------palindrom----
    // int n=12321;
    // int v=n;
    // int rever=0;int rem=0;
    // while(v!=0){       
    //     rem=v%10;
    //     v=v/10;
    //     rever+=rem;
    //     rever *=10;     
    // }
    // rever/=10;
    // if(n==rever)cout<<n<< " is palindrom";
    // else cout<<"not a palindrom";

    //----Linear search--
    // int arr[10]={2,3,4,4,6,7,2,2,2,0};
    // int te=0;
    // for(int i=0;i<10;i++){
    //     if(arr[i]==1){
    //         cout<<"Value fount at "<<i<<" position";
    //         te=1;
    //      }
    // }
    // if(te==0)cout<<"Not found";

    //reverse an array
    // int n;
    // cout<<"enter the size of an array:";
    // cin>>n;    
    // int arr[n];
    // cout<<"enter the "<<n<<" element of an array:";
    // for(int j=0;j<n;j++){
    //     cin>>arr[j];
    // }
    // int i=n/2;
    // for(int j=0,k=n-1;j<i;j++,k--){
    //     int temp=arr[j];
    //     arr[j]=arr[k];
    //     arr[k]=temp;
    // }
    // for(int j=0;j<n;j++){
    //     cout<<arr[j]<<endl;
    // }

//----rotate an array in clockwise----
//     int n=7;
//     int old_arr[n]={1,2,3,4,5,6,7};
//     int d=3;
//     int newA[n];    
//     int i=d+1;int j=0;int m=0;
//     if(d>n)i=(d-(2*n))+1;
//     while(i<n){
//         newA[j]=old_arr[i];
//         i++;j++;
//     }
//     for(int k=j;k<=n;k++){
//         newA[k]=old_arr[m];
//         m++;
//     }
//     cout<<"value array:"<<endl;
//  // old_arr.insert(old_arr.begin(), newA.begin(), newA.end());
//     for(int l=0;l<n;l++){
//         cout<<newA[l]<<endl;
//     }

    //---------------------//

    // vector<int> v={1,2,3,4,5,5};
    // vector<int>v1;
    // copy(v.begin(), v.end(), back_inserter(v1));
    // //v1.insert(v1.begin(), v.begin(), v.end());
    // for(int l=0;l<v.size();l++){
    //     cout<<v1[l]<<endl;
    // }

//Unique in array;
// int arr[5]={1,1,3,4,2};
// for(int i=0;i<4;i++){
//     for(int j=i+1;j<5;j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i]<<", ";
//         }
//     }
// }

//1.Alternate swap//18082025
// int arr[6]={1,2,3,4,5,6};
// for(int i=0;i<5;i+=2){
//     int c=arr[i];
//     arr[i]=arr[i+1];
//     arr[i+1]=c;
// }
// for(int i=0;i<6;i++){
//     cout<<arr[i]<<endl;
// }
//2.Reverse alternative
// int arr[5]={1,2,3,4,5};
// for(int i=0,j=1;i<4;i=i+2,j=j+2){
//     int tem=arr[i];
//     arr[i]=arr[j];
//     arr[j]=tem;
// }
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
//}

    //1.unique element 
    // int arr[11]={5 ,3, 1, 5, 1, 3, 4, 4, 0, 8,8 };
    // int size=11;
    // int i=0;
    // while(i<size){
    //     if(arr[i]==-1) i++;
    //     else{
    //         int j=i+1;
    //         while(j<size){
    //             if(arr[j]==arr[i]) {
    //                 arr[j]=-1;
    //                 j++;
    //                 break;
    //             }
    //             else{
    //                 j++;
    //             }
    //         }
    //         if(j>=size) {
    //             cout<<"Unique elemtn=" <<arr[i];
    //             break;
    //         }
    //         i++;
    //     }
    // }
    //2.Uniwue ele 
    // int arr[11]={5 ,3, 1, 5, 1, 3, 4, 4, 0, 8,8 };
    // int size=11;
    // int ans=0;
    // for(int i=0;i<size;i++){
    //     ans^=arr[i];
    // }
    // cout<<"Uniwue ans = "<<ans;
    
    //unique Number of Occurrences(1207)
    // int arr[6]={1,2,2,1,1,3};
    // int size=6;
    // int i=0;
    // vector<int> v;
    // for(i=0;i<size;i++){
    //     if(arr[i]==-1) continue;
    //         int count=1;
    //         for(int j=i+1;j<size;j++){
    //              if(arr[i]==arr[j]) {
    //                 count++;
    //                 arr[j]=-1;
    //              }  
    //         }
    //         v.push_back(count);
    //     }
    //     int vSiz=v.size();
    //    // int vEnd=v.end();
    //     for(int i=0;i<vSiz-1;i++){
    //         for(int j=i+1;j<vSiz;j++){
    //             if(v[i]==v[j])cout<<"Not Unique at "<<i<<j;
    //         }
    //     }

    //Intersection
    vector<int>arr1={4,9,5};
    vector<int>arr2={9,4,9,8,4};
    int n=arr1.size();
    int m=arr2.size();
    vector<int> v;
    int last=0;
    // 1st approach
	// for(int i=0;i<n;i++){
    //     for(int j=last;j<m;j++){
    //          if(arr1[i] < arr2[j]){
    //              break;
    //              }
    //             if(arr1[i]==arr2[j]){
    //                 v.push_back(arr2[j]);
    //                 arr2[j]=-1;
    //                 last=j+1;
    //                 break;
    //             }  
    //     }
    // }
    // second apr
    // int i=0;int j=0;
    // while(i<n && j<m){
    //     if(arr1[i] < arr2[j]) i++;
    //     else if(arr1[i]==arr2[j]){
    //         v.push_back(arr2[j]);
    //         i++;j++;
    //     } else j++;
    // }
    // return v;

    //Intersecton unique value
    unordered_map<int,bool>dup;
    for(int i=0;i<n;i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                //v.push_back(arr2[j]);
                dup.insert({arr2[j],true});
                arr2.erase(arr2.begin() + j);
                break;
            }
        }
    }
    for(auto n:dup){       
        v.push_back(n.first);
    }

} 