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
		ll n;cin>>n;
		vector<ll>v(32,0);
		ll i=0;
		while(n){
			v[i]=n%2;
			i++;
			n/=2;
		}
		reverse(v.begin(),v.end());
		for (ll i = 0; i < 31; i++)
		{
			for (ll i = 0; i < 31; i++)
			{
				if (v[i]==1 && v[i+1])
				{
					v[i-1]=1;
					v[i]=0;
					v[i+1]=-1;
				}
				if (v[i]==-1 && v[i+1]==1)
				{
					v[i]=0;
					v[i+1]=-1;
				}
			}
		}
		reverse(v.begin(),v.end());
		cout<<v.size()<<endl;
		for (ll i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}