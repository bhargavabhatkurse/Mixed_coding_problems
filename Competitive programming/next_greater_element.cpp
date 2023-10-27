
// given: 4,5,2,25,7,8
//NGE: 5,25,25,-1,8,-1    //-1 if no greater element is found

//using stack we can do it in O(n)
// https://www.youtube.com/watch?v=T-E3hWEPWWU

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

vector<int> nge(vector<int> v1) {
	vector<int> final(v1.size());
	stack<int> st;

	for(int i=0;i<v1.size();i++){
		while(!st.empty() && v1[st.top()]< v1[i]) {
			final[st.top()] = v1[i];
			st.pop();
		}
		st.push(i);
       }

       while(!st.empty()) {
			final[st.top()] = -1;
			st.pop();
		}

	return final;

}

int main()
{
  int n = 6;

  vector<int> v1(n);
  v1 = {4,5,2,25,7,8};

  vector<int> v2 = nge(v1);

  for(int i=0;i<v2.size();i++){
  		cout<<(v2[i] == -1?-1:v2[i])<<" ";
	}


    return 0;
}