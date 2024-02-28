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
		ll a,b,l; cin>>a>>b>>l;
		ll ans;
		set<double>st;
		int cnt=0;
		for (ll i = 0; pow(a,i) <= l; i++)
		{
			for (ll j = 0; pow(a,i)*pow(b,j) <= l; j++)
			{
				if (l%(int)(pow(a,i)*pow(b,j))==0)
				{
					st.insert((double)(l/(pow(a,i)*pow(b,j))));
					// cout<<"yes";
					cnt++;
				}
				// ll cnt=l/(pow(a,i)*pow(b,j));
				// cout<<l<<" "<<i<<" "<<j<<endl;
				// st.insert(cnt);
			}
		}
		cout<<st.size()<<endl;
	}

	return 0;
}