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
		int n;cin>>n;
		vector<ll>a(n);
		vector<ll>b(n+1);
		bool flag=false;
		for (ll i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (ll i = 0; i < n+1; i++)
		{
			cin>>b[i];
		}
		ll ans=b[b.size()-1];
		ll cnt=0;
		ll mx=LLONG_MAX;
		for (ll i = 0; i < n; i++)
		{
			cnt+=abs(b[i]-a[i]);
			if (ans<=max(a[i],b[i]) && ans>=min(a[i],b[i]) )
			{
				flag=true;
			}
			mx=min(mx,abs(b[i]-ans));
			mx=min(mx,abs(a[i]-ans));
		}
		if (flag)
		{
			cnt++;
		}else{
			cnt+=(mx+1);
		}
		cout<<cnt<<endl;
	}

	return 0;
}