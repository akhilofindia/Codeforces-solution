#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long a[n],b[n],c[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin>>c[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		sort(c,c+n,greater<long long>());
		vector<long long>v;
		for (long long i = 0; i < n; i++)
		{
			long long x=b[i]-a[i];
			v.push_back(x);
		}
		long long ans=0;
		sort(v.begin(),v.end());
		for (long long i = 0; i < n; i++)
		{
			ans+=(v[i]*c[i]);
		}
		cout<<ans<<endl;
	}

	return 0;
}