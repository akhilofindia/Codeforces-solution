#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	int M = 1000000007;
	while(tc--){
		ll n,k; cin>>n>>k;
		vector<int>arr(n);
		ll sum=0;
		ll subsum=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		ll cnt=0;
		ll ok=0;
		for (ll i = 0; i < n; i++)
		{
			cnt+=arr[i];
			if (cnt<0)
			{
				cnt=0;
			}
			ok=max(cnt,ok);   //max subarray
		}
		ll mx=ok;
		if (k==1)
		{
			sum+=ok;
			sum=(sum+M)%M;
		}else{
			for (ll i = 0; i < k; i++)
			{
				sum+=mx;
				sum=(sum+M)%M;
				mx+=mx;
				mx%=M;
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}