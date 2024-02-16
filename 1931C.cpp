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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int i=0,j=n-1;
		while(i<n && arr[i]==arr[0]){
			i++;
		}
		while(j>=0 && arr[j]==arr[n-1]){
			j--;
		}
		if (n==1)
		{
			cout<<0<<endl;
		}else{
			if (arr[0]!=arr[n-1])
			{
				cout<<min(j+1,n-i)<<endl;
			}else{
				cout<<max(0,j-i+1)<<endl;
			}
		}
	}

	return 0;
}