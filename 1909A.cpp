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
		int n; cin>>n;
		int a=INT_MIN;
		int b=INT_MAX;
		int c=INT_MIN;
		int d=INT_MAX;
		while (n--)
		{
			int x,y;
			cin>>x>>y;
			a=max(a,x);
			b=min(b,x);
			c=max(c,y);
			d=min(d,y);
		}
		if (c*d<0 && a*b<0)
		{
			cn;
		}else{
			cy;
		}
	}

	return 0;
}