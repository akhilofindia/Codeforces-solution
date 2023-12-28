#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<vector<int>>v(n+1);
		for (int i = 1; i < n; i++)
		{
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int ans=0;
		for (int i = 1; i <= n; i++)
		{
			if (v[i].size()==1)
			{
				ans++;
			}
		}
		cout<<(ans+1)/2<<endl;
	}

	return 0;
}