#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<pair<int,int>>arr(n);
	for (int i = 0; i < n; i++)
	{
		int x,y;
		cin>>x>>y;
		arr[i]={x,y};
	}
	sort(arr.begin(),arr.end());
	int ans=-1;
	for (int i = 0; i < n; i++)
	{
		if (ans<=arr[i].second)
		{
			ans=arr[i].second;
		}else{
			ans=arr[i].first;
		}
	}
	cout<<ans<<endl;

	return 0;
}