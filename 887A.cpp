#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0;
    string s;
    int ans=0;
    cin>>s;
    // n = s.length();
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            ans=1;
        }
        else if(s[i] == '0' && ans==1){
            count++;
        }
    }
    if(count >= 6){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

	return 0;
}