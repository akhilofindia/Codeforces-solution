#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

ll mex(vector<ll>& arr) {
    set<ll> s(arr.begin(), arr.end());
    ll mex = 0;
    while (s.find(mex) != s.end()) {
        mex++;
    }
    return mex;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n;cin>>n;
		vector<ll>arr(n);
		map<ll,ll>mp;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		ll mn=INT_MAX;
		vector<ll>v;
		for (auto i: mp)
		{
			if (i.second==1)
			{
				v.push_back(i.first);
			}
		}
		sort(v.begin(),v.end());
		if (v.size()>1)
		{
			cout<<v[1]<<endl;
		}else{
			int mx=mex(arr);
			cout<<mx<<endl;
		}
	}

	return 0;
}