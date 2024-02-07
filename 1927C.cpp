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
		ll n,m,k; cin>>n>>m>>k;
		ll a[n],b[m];
		for (ll i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (ll i = 0; i < m; i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		ll cnt1=0,cnt2=0;
		vector<ll>va,vb;
		set<ll>st1,st2;	
		for (ll i = 0; i < n; i++)
		{
			if (a[i]<=k)
			{
				st1.insert(a[i]);
			}
		}
		for (ll i = 0; i < m; i++)
		{
			if (b[i]<=k)
			{
				st2.insert(b[i]);
			}
		}
		ll flag=0;
		if (st1.size()<k/2 || st2.size() <k/2)
		{
			flag=1;
		}else{
			set<ll>st;
			for (auto i: st1)
			{
				st.insert(i);
			}
			for (auto i: st2)
			{
				st.insert(i);
			}
			for (ll i = 1; i <= k; i++)
			{
				if (!st.count(i))
				{
					flag=1;
					break;
				}
			}
		}
		if (flag==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
		
	}

	return 0;
}