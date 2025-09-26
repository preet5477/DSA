// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5]={1,2,3,5,6},j=0;
    
    for(int i=0;i<5;i++)
    {
        j=j+1;
         if(arr[i] != j)
         {
            printf("%d\n",j);
            j++;
        }
    }
    return 0;
}