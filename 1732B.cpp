#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		string s;cin>>s;
		int count=0;
		for(int i = 1;i < s.length(); i++)
		{
			if(s[i]!=s[i-1]) 
			{
				count++;
			}
		}
		if(count==0){
			cout<<0<<endl;
			continue;
		}
		if(s[0]=='0'){
			count--;
		}
		cout<<count<<endl;
	}

	return 0;
}