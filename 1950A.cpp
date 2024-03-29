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
		ll a,b,c; cin>>a>>b>>c;
		if (a<b && b<c && c>a)
		{
			cout<<"STAIR"<<endl;
		}else if (a<b && b>c && c>a)
		{
			cout<<"PEAK"<<endl;
		}else{
			cout<<"NONE"<<endl;
		}
	}

	return 0;
}