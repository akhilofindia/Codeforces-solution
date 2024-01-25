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
		vector<ll>arr(n);
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<vector<ll>>vi;
		for (ll i = 0; i < n; i++)
		{
			ll mx= max_element(arr.begin(),arr.end())-arr.begin();
			if (mx!=n-i-1)
			{
				vi.push_back({mx+1,n-i,1});
			}
			arr.erase(arr.begin()+mx);
		}
		cout<<vi.size()<<" "<<endl;
		for (auto i: vi)
		{
			cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
		}
	}

	return 0;
}