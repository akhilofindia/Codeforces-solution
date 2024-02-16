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
		ll n,k; cin>>n>>k;
		ll cnt=0;
		if (k==4*n-2)
		{
			cnt++;
		}
		if (k%2==1)
		{
			cout<<k/2+1+cnt<<endl;
		}else{
			cout<<k/2+cnt<<endl;
		}
	}

	return 0;
}