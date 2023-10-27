#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;


unordered_map<char,int> symbol = {{'{',-1},{'}',+1},{'[',-2},{']',+2}};//opening is -, closing is +
string isbalanced(string s) {
	stack<char> st;
	for(char bracket: s) {
		if(symbol[bracket] < 0) { //if its an opeing bracket
			st.push(bracket); //push it
		}
		else {
			if(st.empty()) return "no"; //if a closing bracket is encountered, but the stack is empty, return false;
			
			char top = st.top(); 
			st.pop();

			//check if the opening and closing brackets are of same type
			if(symbol[bracket] + symbol[top] != 0) return "no"; //if not, false
		}
	}
	if(st.empty())
	return "yes";
	else
	return "no";
}
int main() {

string s = "{}[]{{}}";
cout<<isbalanced(s);
	return 0;
}
