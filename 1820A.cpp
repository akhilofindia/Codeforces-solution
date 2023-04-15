#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string s; cin>>s;
		int n=s.length();
		int ans=0;
        if(n==1){
            if(s[0]=='^'){
            	ans++;
            }
        }
        if(s[n-1]=='_'){
        	ans++;
        }
        if(s[0]=='_'){
            ans++;
        }       
        for(int i = 0; i < n-1 ;i++){
            if(s[i]=='_' && s[i+1]=='_'){
            	ans++;
            }
        }
        cout<<ans<<endl;
	}

	return 0;
}	