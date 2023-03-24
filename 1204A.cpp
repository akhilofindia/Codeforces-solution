#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;   
    cin>>s; 
    int count = s.length()/2;
    if(s.length()%2==1){
        for(int i=1;i<s.length();i++){
            if(s[i]== '1')
            {
               count++;
               break;
            }    
        }
    }
    cout<<count<<endl;

	return 0;
}