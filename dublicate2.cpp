#include <iostream>
//#include <stdlib>
#include<vector>
using namespace std;
int main() {
    vector<int> nums= {1,2,3,1};
    
    int target = 3;
    //cout<<nums[0];
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(i!=j && nums[i]==nums[j] && abs(i-j)<=target){
                cout<<"ture"<<endl;
            }
        }
    }
    
    return 0;
}
