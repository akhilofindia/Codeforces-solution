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
		int n,k;cin>>n>>k;
		vector<int>arr(k);
		for (int i = 0; i < k; i++)
		{
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		reverse(arr.begin(),arr.end());
		int cat=0;
		int ans=0;
		for (int i = 0; i < k; i++)
		{
			if (cat<arr[i])
			{
				cat+=(n-arr[i]);
				ans++;
			}else{
				break;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}