#include <stdio.h>
//https://www.youtube.com/watch?v=O84uumjBOMY

int exponentialcomplexity(int x,int n) {
    if(n == 0) return 1;
    return x*exponentialcomplexity(x,n-1);    //order of n
}

int logarithmiccomplexity(int x,int n) {
    if(n == 0) return 1;
    int x_n_by_2 = logarithmiccomplexity(x,n/2);   //  x_n_by_2 calculates x^n/2
    int xn = x_n_by_2*x_n_by_2;                 //x^100 = x^50 * x^50
    
    if(n%2 == 1) xn = xn *x;     //if its odd, we need to multiply once more with x
                                        //x^101 = x^50 * x^50 *x      one extra x term
    return xn;
}

int main()
{
    
   int x = 2,n= 20;
   printf("  exponential complexity = %d\n", exponentialcomplexity(x,n));
   printf("  logarithmic complexity = %d",logarithmiccomplexity(x,n));

    return 0;
}
