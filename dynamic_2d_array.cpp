#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
//int **arr = (int **)malloc(sizeof(int *)*2);
int **arr = new int*[2];
for (int i = 0; i < 2; i++)
{
    //arr[i] = (int *)malloc(sizeof(int)*2);
    arr[i] = new int[2];
    }

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2;j++)
{
    arr[i][j] = 1;
}
}

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 2;j++)
{
    cout<<arr[i][j]<<" ";
}
cout<<endl;
}

//deallocating
for (int i = 0; i < 2; i++)
{

   delete arr[i];
}

delete[] arr;

    return 0;
}