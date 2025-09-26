#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    unordered_map<int,int> n;

    //insertion
    //1.
    pair<string,int> p= make_pair("one",1);
    m.insert(p);

    // 2
    pair<string,int> p2("two",2);
    m.insert(p2);
    m["two"]=5;
    m["three"]=3;
    cout<<m["one"]<<endl;
    cout<<m.at("two")<<endl;

  //  cout<<m.at("unknownKey");
        cout<<m["unknownKey"]<<endl;
        cout<<m["unknownKey1"];
        
        int n1=0,no=0;
        cout<<"Enter value"<<endl;
        while(no>=0){
            cin>>no;
            n[n1]=no;
            n1++;
        }
        cout<<"cout= "<<n.count(1)<<endl;
    int i=0;
      //  while(i!=n.size()-1){
            for(auto i:n){
            cout<<i.first<<"="<<i.second<<endl;
           // i++;
        }
    
}
