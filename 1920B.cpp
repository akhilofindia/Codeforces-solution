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
		ll n,k,x; cin>>n>>k>>x;
		ll arr[n];
		ll b[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		b[0]=arr[0];
		for (ll i = 1; i < n; i++)
		{
			b[i]=b[i-1]+arr[i];
		}
		ll cnt=0;
		if (n-x>0)
		{
			cnt=2*b[n-x-1]-b[n-1];
		}else{
			cnt=(-1*b[n-1]);
		}
		ll z=max(n-k,0ll);
		for (ll i = z; i < n; i++)
		{
			if(i!=0){
				if (i-x>0)
				{
					cnt=max(cnt,2*b[i-x-1]-b[i-1]);
				}else{
					cnt=max(cnt,(-1*b[i-1]));
				}
			}else{
				cnt=max(0ll,cnt);
			}
		}
		cout<<cnt<<endl;

	}

	return 0;
}