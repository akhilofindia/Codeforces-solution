#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	vector<int>v(n+1,0);
	v[0]=1;
	for (int i = 0; i < m; i++)
	{
		int x,y;
		cin>>x>>y;
		v[x]=1;
		v[y]=1;
	}
	int ans;
	for (int i = 1; i < n+1; i++)
	{
		if (v[i]==0)
		{
			ans=i;
			break;
		}
	}
	cout<<n-1<<endl;
	for (int i = 1; i < n+1; i++)
	{
		if (i!=ans)
		{
			cout<<ans<<" "<<i<<endl;
		}
	}

	return 0;
}