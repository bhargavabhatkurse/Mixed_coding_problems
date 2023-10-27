//given: 6 4 5 5 25 7 8
//upperbound and lowerbound work in logn complexity

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

int main()
{ 
	int n=7;
  int a[] = {6,4,5,5,25,7,8};
  sort(a,a+n);

  int *x = upper_bound(a,a+n,5);
  int *y = lower_bound(a,a+n,5);
  
  cout<<y-a<<" "<<x-a<<endl;

  x = upper_bound(a,a+n,9);
  y = lower_bound(a,a+n,9);

  cout<<y-a<<" "<<x-a<<endl;


  for(auto x: a) {
  	cout<<x<<" ";
  }
}