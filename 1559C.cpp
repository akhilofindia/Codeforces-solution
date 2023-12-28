#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		vector<int>v(n);
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
			if (v[i]==0)
			{
				cnt=i+1;
			}
		}
		if (cnt==0)
		{
			cout<<n+1<<" ";
			for (int i = 1; i <= n; i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}else{
			for (int i = 1; i <= cnt; i++)
			{
				cout<<i<<" ";
			}
			cout<<n+1<<" ";
			for (int i = cnt+1; i <= n; i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}

	}

	return 0;
}