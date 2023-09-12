#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		vector<pair<int,int>>v;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			v.push_back({arr[i],i});
		}
		sort(v.begin(),v.end());
		for (int i = 0; i < n; i++)
		{
			v[i].first=n-i;
		}
		vector<int>ans(n);
		for (int i = 0; i < n; i++)
		{
			ans[v[i].second]=v[i].first;
		}
		for (int i = 0; i < n; i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}