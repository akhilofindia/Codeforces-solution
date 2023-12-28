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
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<int>cnt(n),ans;
		ans.push_back(arr[0]);
		cnt[n-1]=arr[n-1];
		for (int i = n-2; i >= 0; i--)
		{
			cnt[i]=min(arr[i],cnt[i+1]);
		}
		for (int i = 1; i < n; i++)
		{
			if (arr[i]>ans.back())
			{
				if (cnt[i]<ans.back())
				{
					ans.pop_back();
					ans.push_back(arr[i]);
				}else{
					ans.push_back(arr[i]);
				}
			}
		}
		cout<<ans.size()<<endl;
	}

	return 0;
}