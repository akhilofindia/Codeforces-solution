#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n; cin>>n;
		vector<ll>arr(n-1);
		ll mx=0;
		for (ll i = 0; i < n-1; i++)
		{
			cin>>arr[i];
			mx=max(arr[i],mx);
		}
		mx++;
		vector<ll>ans;
		ans.push_back(mx);
		for (ll i = 1; i < n; i++)
		{
			mx+=arr[i-1];
			ans.push_back(mx);
		}
		for (ll i = 0; i < ans.size(); i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}