#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int n; cin>>n;
	int arr[n];
	int mi=0,mx=0,cnt=INT_MIN;
	map<int,int>mp;
	for (int i = 1; i <= n; i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
		if (mp[arr[i]]>cnt)
		{
			cnt=mp[arr[i]];
			mx=arr[i];
			mi=i;
		}
	}
	if (cnt==n)
	{
		cout<<0<<endl;
	}else{
		cout<<n-cnt<<endl;
		for (int i = mi+1; i <= n; i++)
		{
			if (arr[i]==mx)
			{
			}else if (arr[i]>mx)
			{
				cout<<2<<" ";
				cout<<i<<" "<<i-1<<endl;
			}else{
				cout<<1<<" ";
				cout<<i<<" "<<i-1<<endl;
			}
		}
		for (int i = mi-1; i>=1 ; i--)
		{
			if (arr[i]==mx)
			{
			}else if (arr[i]>mx)
			{
				cout<<2<<" ";
				cout<<i<<" "<<i+1<<endl;
			}else{
				cout<<1<<" ";
				cout<<i<<" "<<i+1<<endl;
			}
		}
	}

	return 0;
}