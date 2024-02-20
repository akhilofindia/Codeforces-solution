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
		int n,k; cin>>n>>k;
		int cnt=(n+1)/2;
		if (k>cnt)
		{
			k-=cnt;
			int ans=1;
			while(k>1){
				k=(k+1)/2;
				ans*=2;
			}
			cout<<ans<<endl;
		}else{
			cout<<2*k-1<<endl;
		}
	}

	return 0;
}