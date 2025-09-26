#include<iostream>
#include<vector>
using namespace std;

void threeGrat(int a[]){
    

}
int main(){
    int a0=0,a1=0;
    vector<int>a;
    a.push_back(1);
    a.push_back(0);
    a.push_back(0);
    a.push_back(0);
    a.push_back(1);
    a.push_back(0);
    a.push_back(0);
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    int i=0,j=a.size()-1;
  

    while(i<j){
        if(a[i]==1 && a[j]==0){
           a[i]=0;
           a[j]=1;
            i++;j--;
        }
        else if(a[i]==0)i++;
        else if(a[j]==1)j--;
    }

//----------sec--------
//   for(int i=0;i<a.size();i++){
//       if(a[i]==0)a0++;
//       else a1++;
//     }
//     for( int i=0 ;i<a.size();i++){
//         if(i<a0) a[i]=0;
//         else a[i]=1;
//     }
    
//-------1st---------
    // for(int i=0;i<a0;i++){
    //     a[i]=0;
    // }
    // for(int i=a.size()-1;i>a0;i--){
    //     a[i]=1;
    // }


    for(int k=0;k<a.size();k++){
        cout<<a[k];
    }
    return 0;
}