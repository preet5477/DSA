#include <iostream>
#include<conio.h>
using namespace std;
int main() {
    int n;
    cout<<"enter n";
    cin>>n;

    // for(int i=1;i<=n; i++){
    //     for(int j=1;j<=i;j++){   
    //       std::cout <<(i-j+1)<<" ";
    //     }
    //     std::cout << " "<<"\n";        
    // }

  //  int a=0;
    // for(int i=1;i<=n; i++){
    //     for(int j=1;j<=n;j++){ 
    //          if(i== 1|| j==1 || i==n|| j==n || (i+j==n+1 && i==j))
    //         cout<<"*   ";
    //         else cout<<++a<<"   ";
    //     }
    //     std::cout << "   "<<"\n";        }

   // int t=n;
   
  // int j;

  // t=1;
    // for(int i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){    
    //         if((i+j)>n){cout<<t;t++;}
    //          else cout<<" ";
    //     }
    //     cout<<"\n";
    // }
  
/*
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1 
*/
  /*  for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int n1=1;
        for(int k=j;k<=n;k++){
            cout<<n1<<" ";
            n1++;
        }
        int t=i;
        for(int l=1;l<i;l++){        
                cout<<--t<<" ";
        }
        cout<<"\n";
    }*/


/*
 1 2 3 4 5 5 4 3 2 1 
 1 2 3 4 * * 4 3 2 1
 1 2 3 * * * * 3 2 1 
 1 2 * * * * * * 2 1
 1 * * * * * * * * 1
*/
/*
    for(int i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        int k=j;
        for( k=j;k<n;k++){
            cout<<"* ";
        }
        for(int l=1;l<=i;l++){
            cout<<"* ";
        }
        int no=j;
        for(int l=1;l<=n-i;l++){
            cout<<no<<" ";
            no--;
        }

        cout<<endl;
    }
*/
    return 0;
}