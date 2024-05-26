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
		if ((x+y+z)%2==1)
		{
			cout<<-1<<endl;
		}else{
			ll sum=x+y+z;
			if (sum/2>x+y)
			{
				cout<<x+y<<endl;
			}else{
				cout<<sum/2<<endl;
			}
		}
	}

	return 0;
}