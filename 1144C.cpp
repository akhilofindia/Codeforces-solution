#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	ll arr[n];
	map<ll,ll>mp;
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	ll cnt=0;
	for (auto i: mp)
	{
		if (i.second>2)
		{
			cnt=1;
			break;
		}
	}
	if (cnt==1)
	{
		cn;
	}else{
		cy;
		map<ll,ll>m;
		vector<ll>a,b;
		for (ll i = 0; i < n; i++)
		{
			if (m[arr[i]]==0)
			{
				a.push_back(arr[i]);
				m[arr[i]]++;
			}else{
				b.push_back(arr[i]);
			}
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<ll>());
		cout<<a.size()<<endl;
		if (a.size()==0)
		{
			cout<<" "<<endl;
		}else{
			for (ll i = 0; i < a.size(); i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		cout<<b.size()<<endl;
		if (b.size()==0)
		{
			cout<<" "<<endl;
		}else{
			for (ll i = 0; i < b.size(); i++)
			{
				cout<<b[i]<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}