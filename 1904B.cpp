#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long>arr(n);
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<pair<long long,long long>>vi;
		for (int i = 0; i < n; i++)
		{
			vi.push_back({arr[i],i});
		}
		sort(vi.begin(),vi.end());
		sort(arr.begin(),arr.end());
		vector<long long>pre(n,0);
		pre[0]=arr[0];
		for (long long i = 1; i < n; i++)
		{
			pre[i]=pre[i-1]+arr[i];
		}
		vector<long long>ans(n);
		ans[vi[n-1].second]=n-1;                //second has orignal order
		for (long long i = n-2; i >= 0 ; i--)
		{
			if (pre[i]>=vi[i+1].first)
			{
				ans[vi[i].second]=ans[vi[i+1].second];
			}else{
				ans[vi[i].second]=i;            
			}
		}
		for (long long i = 0; i < ans.size(); i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}