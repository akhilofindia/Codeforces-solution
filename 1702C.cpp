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
		int n,k; cin>>n>>k;
		int arr[n];
		map<int,pair<int,int>>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (!mp.count(arr[i]))
			{
				mp[arr[i]].first=i;
				mp[arr[i]].second=i;
			}else{
				mp[arr[i]].second=i;
			}
		}
		while(k--){
			int a,b ; cin>>a>>b;
			if (!mp.count(a) || !mp.count(b))
			{
				cn;
			}else if(mp[a].first>mp[b].second){
				cn;
			}
			else{
				cy;
			}
		}

	}

	return 0;
}