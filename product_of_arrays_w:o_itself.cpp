//https://www.youtube.com/watch?v=gREVHiZjXeQ

//find product of all numbers in the array itself without using division and in constant space;
#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4};
    int output[4];
    
    int product=1;
    
    //finding the left-most 
    for(int i=0;i<4;i++) {
        product = product * a[i];
        output[i]=product;
    }

product=1;
int i;
for(i=4-1;i>0;i--) {
    output[i] = output[i-1] * product;   
    product = product * a[i];
}
output[i] = product;   //base case output[0] = output[1]; for the first element
                       // for the last element, output[i] = output[i-1]

for(int i=0;i<4;i++) 
    cout<<output[i]<<" ";
    
    
    return 0;
}