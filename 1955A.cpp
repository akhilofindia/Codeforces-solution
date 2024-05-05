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
		ll x,y,z; cin>>x>>y>>z;
		ll cost1,cost2;
		if (x%2==1)
		{
			cost1=z*(x/2)+y;
			cost2=x*y;
		}else{
			cost1=z*(x/2);
			cost2=x*y;
		}
		cout<<min(cost1,cost2)<<endl;
	}

	return 0;
}