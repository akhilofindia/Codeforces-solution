#include <bits/stdc++.h>
using namespace std;

int main(){
	long long tc;cin>>tc;
	while(tc--){
		long long n,k; cin>>n>>k;
		vector<long long>arr(n);
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<pair<long long,long long>>v;
		for (long long i = 0; i < n; i++)
		{
			arr[i]=arr[i]%k;
			v.push_back({arr[i],i});
		}
		sort(v.begin(),v.end());
		vector<pair<long long,long long>>vi;
		for (auto it:v)
		{
			if (it.first==0)
			{
				cout<<it.second+1<<" ";
			}else{
				vi.push_back({it.first,-1*it.second});
			}
		}
		sort(vi.begin(),vi.end());
		reverse(vi.begin(),vi.end());
		for (auto it:vi)
		{
			cout<<-1*it.second+1<<" ";
		}

		cout<<endl;
	}

	return 0;
}