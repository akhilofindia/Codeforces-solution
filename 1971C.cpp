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
		int a,b,c,d; cin>>a>>b>>c>>d;
		if (a>b)
		{
			swap(a,b);
		}
		if (c>d)
		{
			swap(c,d);
		}
		if ((c>a && b>c && d>b) || (b>d &&a>c && a < d))
		{
			cy;
		}else cn;
	}

	return 0;
}