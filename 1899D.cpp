#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long>arr(n);
		map<long long,long long>mp;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		long long ans=0;
		for (auto i: mp)
		{
			ans+=((i.second*(i.second-1))/2);   //number of pairs 
		}
		ans+=(mp[1]*mp[2]);
		cout<<ans<<endl;
	}

	return 0;
}