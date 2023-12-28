#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		int a,b,c; cin>>a>>b>>c;
		int x=max(b,c);
		if (a<=x)
		{
			cout<<x-a+1<<" ";
		}else{
			cout<<0<<" ";
		}
		int y=max(a,c);
		if (b<=y)
		{
			cout<<y-b+1<<" ";
		}else{
			cout<<0<<" ";
		}
		int z=max(a,b);
		if (c<=z)
		{
			cout<<z-c+1<<" ";
		}else{
			cout<<0<<" ";
		}
		cout<<endl;
		}

	return 0;
}