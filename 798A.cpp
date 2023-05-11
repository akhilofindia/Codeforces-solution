#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0;
	string s;
	cin>>s;
	n=s.length();
	for(int i=0; i < n/2; i++){
		if(s[i]!=s[n-1-i]){
			count++;
		}
	}
	if(count==1){
		cout<<"YES"<<endl;
	}
	else{
		if(n%2==1 && count==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}