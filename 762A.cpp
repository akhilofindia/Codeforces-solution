#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n,k; cin>>n>>k;
	vector<ll>div;
	for (ll i = 1; i <= sqrt(n); i++)
	{
		if (n%i==0)
		{
			div.push_back(i);
			if (i!=n/i)
			{
				div.push_back(n/i);
			}
		}
	}
	if (div.size()<k)
	{
		cout<<-1<<endl;
	}else{
		sort(div.begin(),div.end());
		cout<<div[k-1]<<endl;
	}

	return 0;
}