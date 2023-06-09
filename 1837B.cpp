#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		string s; cin>>s;
		int ans=1;
		int count=1;
		for (int i = 0; i < n; i++)
		{
			if (s[i]==s[i+1])
			{
				ans++;
			}else{
				ans=1;
			} 
			count=max(count,ans);
		}
		cout<<count+1<<endl;
	}

	return 0;
}