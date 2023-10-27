#include <iostream>
using namespace std;

void hanoi(int n,char from,char to, char aux) {
    if(n==0) return;
    
    hanoi(n-1,from,aux,to);
    cout<<"move disc "<<n<<" from "<<from<<" to "<<to<<endl;
    hanoi(n-1,aux,to,from);
}

int main()
{
    int n=3;
   char from='A';
   char aux='B';
   char to='C';
   
    hanoi(n,from,to,aux);

    return 0;
}