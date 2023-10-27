#include <stdio.h>

int  coin(int value,int n, int arr[3]) {
    
    if(value == 0) return 0;//solution found
    
    int res = 99999;   //setting a max value;
    
   for(int i=0;i<n;i++) {
       
       if(arr[i] <=value) {
       int subres = coin(value - arr[i],n,arr);   //reducing the value by already considered coin 
       if(subres != 99999 && res > subres + 1)
            res = subres + 1; //update;
       }
   }
    return res;
    
    
}
int main()
{
    int a[] = {3};
    printf("answer  = %d ",coin(7,3,a));

    return 0;
}
