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
		vector<ll>vi(n);
		vi[n-1]=n;
		for (ll i = n-2; i >=0; i--)
		{
			if (arr[i]!=arr[i+1])
			{
				vi[i]=i+1;          //diff so r
			}else{
				vi[i]=vi[i+1];     //same terms
			}
		}
		// for (ll i = 0; i < n; i++)
		// {
		// 	cout<<vi[i]<<" ";
		// }
		ll q; cin>>q;
		while(q--){
			ll l,r; cin>>l>>r;
			if (l>=r || vi[l-1]>r-1)
			{
				cout<<-1<<" "<<-1<<endl;
			}else{
				cout<<l<<" "<<vi[l-1]+1<<endl;
			}
		}
		cout<<endl;
	}

	return 0;
}