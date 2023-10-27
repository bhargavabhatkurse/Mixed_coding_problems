#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
stack<int> s;
s.push(2);
s.push(3);
while(!s.empty()) {
    cout<<s.top()<<endl;
    s.pop();
}

cout<<endl;
queue<int> q;
q.push(2);
q.push(3);
while(!q.empty()) {
    cout<<q.front()<<endl;
    q.pop();
}

}