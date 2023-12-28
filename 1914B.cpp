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
		int n,k; cin>>n>>k;
		int j=n;
		// cout<<n<<" ";
		for (int i = 1; i <= k; i++)
		{
			cout<<i<<" ";
		}
		for (int i = n; i > k; i--)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}

	return 0;
}