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
		ll n,m; cin>>n>>m;
		vector<ll>va(n),vb(m);
		for (ll i = 0; i < n; i++)
		{
			cin>>va[i];
		}
		for (ll i = 0; i < m; i++)
		{
			cin>>vb[i];
		}
		sort(va.begin(),va.end());
		sort(vb.begin(),vb.end(),greater<ll>());
		ll cnt=0;
		int l=0,h=n-1;
		int x=0,y=m-1;
		while(l<=h){
			ll m=abs(vb[x]-va[l]);
			ll n=abs(vb[y]-va[h]);
			if (n>m)
			{
				cnt+=n;
				h--;
				y--;
			}else{
				cnt+=m;
				l++;
				x++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}