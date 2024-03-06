#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll tc;cin>>tc;
	while(tc--){
		ll n;cin>>n;
		vector<ll>arr(n);
		map<ll,ll>mp;
		set<ll>st,st2;
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		ll k=0;
		while(mp[k]>1){
			st2.insert(k);
			st.insert(k);
			k++;
		}
		if(mp[k]==0){
			ll right=0;
			for (ll i = 0; i < n; i++)
			{
				if (st.count(arr[i]))
				{
					st.erase(arr[i]);
				}
				if (st.size()==0)
				{
					right=i+1;
					break;
				}
			}
			for (ll i = right; i < n; i++)
			{
				if (st2.count(arr[i]))
				{
					st2.erase(arr[i]);
				}
			}
			if (st2.size())
			{
				cout<<-1<<endl;
			}else{
				cout<<2<<endl<<1<<" "<<right<<endl;
				cout<<right+1<<" "<<n<<endl;
			}
		}else{
			cout<<-1<<endl;
		}
	}

	return 0;
}