#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

        int trap(vector<int>& height) {
            int n = height.size();
            int prev[n];
            prev[0] = -1;
    
            //prev gratest element
            int max = height[0];
            for(int i=1;i<n;i++){
                prev[i]=max;
                if(max<height[i]) max = height[i];
            }
    
            //next gretet element
            int next[n];
            next[n-1]=-1;
            max = height[n-1];
            for(int i=n-2;i>=0;i--){
                next[i]=max;
                if(max< height[i]) max = height[i];
            }
    
            //min value of array prev , next
            int min[n];
            for(int i=0;i<n; i++){
                if(prev[i]<next[i]) min[i]=prev[i];
                else min[i]= next[i];
            }
    
            //count the water
            int count=0;
            for(int i=1;i<n-1;i++){
                if(min[i]>height[i]){
                    count+=min[i]-height[i];
                }
            }
            return count;
        }
int main(){
    vector<int> height;
   height.push_back(4);
   height.push_back(2);
   height.push_back(0);
   height.push_back(3);
   height.push_back(2);
   height.push_back(5);
    
    cout<<trap(height);

}