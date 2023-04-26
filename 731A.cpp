#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
    cin>>s;
    char c='a';
    int count=0;
    int m,n;
    for(int i = 0; i < s.length(); i++){
    	m=abs(s[i]-c);
    	n=26-abs(s[i]-c);
        count+=min(m,n);
        c=s[i];
    }
    cout<<count<<endl;


	return 0;
}