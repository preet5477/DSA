using namespace std;
#include<iostream>
#include<vector>
 #include <bits/stdc++.h>
int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // // for(int i=0;i<3;i++){
    // //     for(int j=0;j<3;j++){
    // //         cout<<arr[i][j]<<" ";
    // //     }
    // //     cout<<"\n";
    // // }
    // int mcols=3;int nRows=3;
    // vector<int> ans;
    // int n=-1;
    // for(int i=0;i<mcols;i++){
    //     for(int j=0;j<nRows;j++){
    //         if(i%2==0)n++;
    //         ans.push_back(arr[n][i]);
    //         if(i%2==1)n--;
    //     }
    //   //  cout<<"\n";
    // }
    // for(int i=0;i<ans.size();i++){ 
    //     cout<<ans[i]<<" ";
    // }
//2 -6 2 5 2 

    //find doublet
    // vector<int> a={2,-6,2,5,2};
    // int s=4;
    // vector<vector<int>> v;
    // for(int i=0;i<a.size();i++){
    //     for(int j=0;j<a.size();j++){
    //         if(i!=j && a[i]<=a[j]){
    //             if(a[i]+a[j]==s){
    //                 v.push_back({a[i], a[j]});
                    
    //             cout<<a[i]<<"+"<<a[j]<<"="<<a[i]+a[j]<<endl;
    //             break;
    //             }
    //         }
    //     }
    // }
    //find triple sum
   

    vector<int> arr = {1 ,2 ,3 ,-1 ,-2 ,-3};
    int target = 0;
    set<vector<int>> uniqueTriplets; // to avoid duplicates

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    vector<int> triplet = {arr[i], arr[j], arr[k]};
                    sort(triplet.begin(), triplet.end()); // sort each triplet
                    uniqueTriplets.insert(triplet);       // insert in set
                }
            }
        }
    }

    // print results
    for (auto t : uniqueTriplets) {
        cout << t[0] << " " << t[1] << " " << t[2] << endl;
    }
}
