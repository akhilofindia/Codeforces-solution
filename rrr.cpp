#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	vector<ll>Q(n),A(n),B(n);
	for (ll i = 0; i < n; i++)
	{
		cin>>Q[i];
	}
	for (ll i = 0; i < n; i++)
	{
		cin>>A[i];
	}
	for (ll i = 0; i < n; i++)
	{
		cin>>B[i];
	}
	ll cnt=0;
	ll ans=INT_MAX;
	ll mx=0;
	ll k=INT_MAX;
	for (ll i = 0; i < n; i++)
	{
		if (A[i]!=0)
		{
			ans=min(ans,Q[i]/A[i]);
		}
	}
	// cout<<ans<<endl;
    for(ll i=0; i<=ans;i++){
    	vector<int>Z(n);
    	for (int i = 0; i < n; i++)
    	{
    		Z[i]=Q[i];
    	}

    	for (ll i = 0; i < n; i++)
    	{
    		Z[i]-=A[i]*(cnt);
    	}
    	for (ll i = 0; i < n; i++)
    	{
    		if (B[i]==0)
    		{
    			continue;
    		}
    		k=min(k,Z[i]/B[i]);
    		// cout<<k<<endl;
    	}
    	mx=max(mx,cnt+k);
    	cnt++;
    }
    cout<<mx<<endl;

	return 0;
}