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
		ll m,n; cin>>m>>n;
		vector<ll>a(m+n+1),b(m+n+1);
		for (ll i = 0; i < m+n+1; i++)
		{
			cin>>a[i];
		}
		for (ll i = 0; i < m+n+1; i++)
		{
			cin>>b[i];
		}
		ll j=0;
		vector<ll>final;
		while(j<m+n+1){
			ll cnt=0;
			ll flag=0;
			ll programmer=0,tester=0;
			ll ans=0;
			for (ll i = 0; i < m+n+1; i++)
			{
				if (i!=j && flag==0)
				{
					if (a[i]>b[i])
					{
						programmer++;
						cnt+=a[i];
					}else{
						tester++;
						cnt+=b[i];
					}
				}
				if (programmer==m)
				{
					flag=1;
					ans=i+1;
					break;
				}
				if (tester==n)
				{
					flag=2;
					ans=i+1;
					break;
				}
			}
			if (flag==1)
			{
				for (ll i = ans; i < m+n+1; ++i)
				{
					if (i!=j)
					{
						cnt+=b[i];
					}
				}
			}else if (flag==2)
			{
				for (ll i = ans; i < m+n+1; i++)
				{
					if (i!=j)
					{
						cnt+=a[i];
					}
				}
			}
			final.push_back(cnt);
			j++;
		}
		for (ll i = 0; i < final.size(); i++)
		{
			cout<<final[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}