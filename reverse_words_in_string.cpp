#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "the          sky           is           blue";
    string temp;  //temp reads a word
    string perm; //final string
    
    for(int i=0;i<s.size();i++) {
      
    if(isalpha(s[i])) temp.push_back(s[i]); //if a character, append it
    if((isalpha(s[i-1]) && s[i] == ' ') || i == s.size()-1) {  //if previous is a character and present is a string, 
        perm.insert(0," "); //insert a space
        perm.insert(0,temp); //insert the word
        temp.clear(); //clear the string
    }
    }

    cout<<endl<<perm;


    return 0;
}
