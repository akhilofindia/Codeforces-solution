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
		vector<ll>v;
		int low=1;
		int hi=n;
		while(n>0){
			v.push_back(low);
			n--;
			if (n!=0)
			{
				v.push_back(hi);
				hi--;	
				low++;
				n--;
			}else{
				break;
			}
		}
		for (ll i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}