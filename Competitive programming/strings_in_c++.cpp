#include <iostream>
#include <string>
using namespace std;

int main() {
string s;
//cin>>s;  //to accept only one word. cin terminates after space;

getline(cin,s);

//cout<<s;

for (int i = 0; i < s.size(); i++)
{
    cout<<s[i]<<" ";
}

cout<<endl;
// alternative way using iterator
//  for(auto i: s) //auto -> char
//  cout<<i<<" ";

//s.append("bhargava");

//s.clear(); //clears the string


//to compare
if(!s.compare("bhargava")) { //returns 0 if same
    cout<<endl<<"same";
}
cout<<s;

s.erase(s.begin(),s.end());
if(s.empty()) cout<<endl<<"empty";

   
string s1 = "bhargava";
cout<<endl<<s1.find("a"); //returns the index of a

s1.insert(3,"xgfgfgfgfgf");
cout<<endl<<s1.find("x"); 

 return 0;
}


