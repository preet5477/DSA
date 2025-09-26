#include <bits/stdc++.h>
int main(){
   vector<string> word1= {"ab", "c"};
    vector<string> word2= {"a", "bc"};
   string s1;
   string s2;
   for(int i=0;i<word1.size();i++){
    s1=s1+word1[i];
   }
   for(int i=0;i<word2.size();i++){
    s2=s2+word2[i];
   }
   if(s1==s2)cout<<"Equal";
   else cout<<"Not Equal";
}