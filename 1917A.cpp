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
		int neg=0;
		int arr[n];
		set<int>st;
		int zero=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int ans=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]<0)
			{
				neg++;
				ans=i+1;
			}
			if (arr[i]==0)
			{
				zero++;
			}
		}
		if (zero>0)
		{
			cout<<0<<endl;
		}else if (neg==0)
		{
			cout<<1<<endl;
			cout<<1<<" "<<0<<endl;
		}else if (neg%2==0)
		{
			cout<<1<<endl;
			cout<<1<<" "<<0<<endl;
		}else{
			cout<<0<<endl;
		}
	}

	return 0;
}