#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector <int> a(n),b(m);
	// map<int,int>mp;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		// mp[a[i]]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	for (int i = 0; i < m; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j]<=b[i])
			{
				// cout<<j<<" ";;
				count++;
				// break;
			}
		}
		cout<<count<<" ";
	}
	// for (int i = 0; i < m; i++)
	// {
	// 	int cnt=0;
	// 	for (int j = 0; j < mp.size(); j++)
	// 	{
	// 		if (b[i]>=mp[i].first)
	// 		{
	// 			cnt+=mp[i].second;
	// 		}
	// 	}
	// 	cout<<cnt<<" ";
	// }

	return 0;
}