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
		int n;cin>>n;
		int arr[n];
		for (ll i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<ll>ans;
		for (ll i = 0; i < n-2; i++)
		{
			vector<ll>ok;
			ok.push_back(arr[i]);
			ok.push_back(arr[i+1]);
			ok.push_back(arr[i+2]);
			sort(ok.begin(),ok.end());
			ans.push_back(ok[1]);
			ok.clear();
		}
		sort(ans.begin(),ans.end());
		if (n==1)
		{
			cout<<arr[0]<<endl;
		}else if (n==2)
		{
			cout<<min(arr[0],arr[1])<<endl;
		}else{
		    cout<<ans[ans.size()-1]<<endl;
	    } 
	}

	return 0;
}