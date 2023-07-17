#include <bits/stdc++.h>
using namespace std;

int k(string a, string b){
	int z=0;
	for (int i = 0; i < a.length(); i++)
	{
		z+=int(abs(a[i]-b[i]));
	}
	return z;
} 
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m; cin>>n>>m;
		vector<string>v(n);
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		int ans=INT_MAX;
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				ans=min(ans,k(v[i],v[j]));
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}