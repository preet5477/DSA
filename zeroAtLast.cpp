#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v={1,0,1};
    int i=0,j=1;
    while(i<v.size()){
        if(v[i]<v[j]){
            //swap(v[i],v[j]);
           // cout<<v[i]<<"-"<<v[j]<<endl;
            //int tem=v[i];
            v[i]=v[j];
            v[j]=0;
           // cout<<v[i]<<"-"<<v[j]<<endl;
            
            i++;j++;
        }
        else if(j==v.size()-1){
            cout<<"in ifelse"<<endl;
            i++;
        }
        else{ 
            cout<<"in else"<<endl;
           j++;
        }
    }
    for(int k=0;k<3;k++){
        cout<<v[k]<<endl;
    }
}