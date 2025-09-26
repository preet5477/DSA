#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1); a.push_back(3); a.push_back(5); a.push_back(7);
    a.push_back(9); a.push_back(11); a.push_back(13);a.push_back(15);
    a.push_back(17);a.push_back(19);

    vector<int> b;
    b.push_back(2); b.push_back(4);b.push_back(6); b.push_back(8);
    b.push_back(10); b.push_back(12);b.push_back(14);b.push_back(16);
    b.push_back(18);b.push_back(20);

    int n1=a.size(); int n2=b.size();

    vector<int> c(n1+n2);

    int i=0,j=0,k=0;

    while(k<n1+n2){
       if(i<n1){
            if(a[i]<b[j]){
                c[k]=a[i];
                i++;
            }
            else {
                c[k]=b[j];
                j++;
            }
       }
       else{
         c[k]=b[j];
         j++;
       }
        k++;
    }

    for(int z=0;z<c.size();z++){
        cout<<c[z]<<" ";
    }
}