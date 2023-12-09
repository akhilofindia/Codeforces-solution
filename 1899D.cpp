#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>arr(n);
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		int ans=0;
		for (auto i: mp)
		{
			ans+=((i.second*(i.second-1))/2);   //number of pairs 
		}
		ans+=(mp[1]*mp[2]);
		cout<<ans<<endl;
	}

	return 0;
}