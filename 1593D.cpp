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
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		if (arr[0]==arr[n-1])
		{
			cout<<-1<<endl;
		}else{
			int ans=0;
			for (int i = 1; i < n; i++)
			{
				ans=__gcd(ans,arr[i]-arr[0]);
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}