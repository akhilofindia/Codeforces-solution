#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n; cin>>n;
		ll cnt=0;
		ll y=n;
		while(n){
			n/=10;
			cnt++;
		}
		ll x=(long long)pow(10,cnt-1);
		cout<<y-x<<endl;
	}

	return 0;
}