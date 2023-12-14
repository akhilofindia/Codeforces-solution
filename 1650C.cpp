#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;
		cin>>n>>m;
		vector<pair<pair<int,int>,int>>v;
		for (int i = 0; i < m; i++)
		{
			int a,b;
			cin>>a>>b;
			v.push_back({{b,a},i+1});
		}
		sort(v.begin(),v.end());
		vector<pair<int,int>>ind;
		int ans=0;
		for (int i = 0; i < 2*n; i++)
		{
			ans+=v[i].first.first;
			ind.push_back({v[i].first.second,v[i].second});
		}
		cout<<ans<<endl;
		sort(ind.begin(),ind.end());
		for (int i = 0; i < n; i++)
		{
			cout<<ind[i].second<<" "<<ind[2*n-1-i].second<<endl;
		}
		cout<<endl;
	}

	return 0;
}