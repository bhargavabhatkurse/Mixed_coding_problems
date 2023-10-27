#include <bits/stdc++.h>
#include <string>
using namespace std;


int main()
{   string num = "00001105";

       int frequency[10];
        memset(frequency,0,sizeof(frequency));
        
        for(char x: num) {
            frequency[x-'0']++;
        }
            
    int maximum = -1;
    string temp = "";
    
    for(int i=9;i>=0;i--) {
        
        if(frequency[i]%2 == 1 && frequency[i]<=2)
            maximum = max(maximum,i);
            
        else {
            for(int j=0;j<frequency[i]/2;j++)
                temp.push_back(i+'0');
            
            if(frequency[i]%2 == 1)
            maximum = max(maximum,i);
            
        }
    }
    
    string tempreverse = temp;
    reverse(tempreverse.begin(),tempreverse.end());

    string fin;
    fin = temp + (maximum!=-1?to_string(maximum):"") +tempreverse;

    if(fin[0] == '0') 
        if(maximum == -1) cout<<"0";
        else
       cout<<to_string(maximum);
    
   
cout<<fin;
    return 0;
}
