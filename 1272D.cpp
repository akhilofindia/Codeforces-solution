#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	ll arr[n];
	for (ll i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	ll pre[n],suf[n];
	pre[0]=1;
	for (ll i = 1; i < n; i++)
	{
		if (arr[i]>arr[i-1])
		{
			pre[i]=1+pre[i-1];
		}else{
			pre[i]=1;
		}
	}
	suf[n-1]=1;
	for (ll i = n-2; i >= 0; i--)
	{
		if (arr[i+1]>arr[i])
		{
			suf[i]=1+suf[i+1];
		}else{
			suf[i]=1;
		}
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<pre[i]<<" "<<suf[i]<<endl;
	// }
	ll final=0;
	ll final1=0,final2=0;
	for (ll i = 0; i < n; i++)
	{
        final1=max(pre[i],final1);                 //zada bande kiske h
        final2=max(suf[i],final2);                 //zada bande kiske h
	}
	final=max(final1,final2);
	for (ll i = 0; i < n-2; i++)
	{
		if (arr[i]<arr[i+2])
		{
			final=max(final,pre[i]+suf[i+2]);
		}
	}
	cout<<final<<endl;


	return 0;
}