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
		ll n,k;cin>>n>>k;
		vector<vector<char>> grid(n, vector<char>(k));
		for (ll i = 0; i < n; i++)
		{
			for (ll j = 0; j < k; j++)
			{
				cin>>grid[i][j];
			}
		}
		ll cnt1=0,cnt2=0,ans1=0,ans2=0;
		for (ll i = 0; i < k; i++)
		{
			if (grid[0][i]=='W')
			{
				cnt1=1;
			}
			if (grid[0][i]=='B')
			{
				cnt2=1;
			}
		}
		ans1+=cnt1;
		ans2+=cnt2;
		cnt1=0;
		cnt2=0;
		for (ll i = 0; i < k; i++)
		{
			if (grid[n-1][i]=='W')
			{
				cnt1=1;
			}
			if (grid[n-1][i]=='B')
			{
				cnt2=1;
			}
		}
		ans1+=cnt1;
		ans2+=cnt2;
		cnt1=0;
		cnt2=0;
		for (ll i = 0; i < n; i++)
		{
			if (grid[i][k-1]=='W')
			{
				cnt1=1;
			}
			if (grid[i][k-1]=='B')
			{
				cnt2=1;
			}
		}
		ans1+=cnt1;
		ans2+=cnt2;
		cnt1=0;
		cnt2=0;
		for (ll i = 0; i < n; i++)
		{
			if (grid[i][0]=='W')
			{
				cnt1=1;
			}
			if (grid[i][0]=='B')
			{
				cnt2=1;
			}
		}
		ans1+=cnt1;
		ans2+=cnt2;
		if (ans1==4 || ans2==4)
		{
			cy;
		}else cn;
	}

	return 0;
}