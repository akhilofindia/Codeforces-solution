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
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		mp[0]=0;
		mp[n-1]=1;
		int leftcost[n],rightcost[n];
		for (int i = 1; i < n-1; i++)
		{
			int right=(arr[i]-arr[i+1]);
			int left=(arr[i]-arr[i-1]);
			if (left>right)
			{
				mp[i]=0;
			}else{
				mp[i]=1;
			}
		}
		leftcost[0]=0;
		for (int i = 1; i < n; i++)
		{
			if (mp[i]==0)
			{
				leftcost[i]=leftcost[i-1]+abs(arr[i]-arr[i-1]);
			}else{
				leftcost[i]=1+leftcost[i-1];
			}
		}
		rightcost[n-1]=0;
		for (int i =n-2 ; i>=0; i--)
		{
			if (mp[i]==0)
			{
				rightcost[i]=1+rightcost[i+1];
			}else{
				rightcost[i]=rightcost[i+1]+abs(arr[i]-arr[i+1]);
			}
		}
		int q; cin>>q;
		while(q--){
			int x,y; cin>>x>>y;
			if (x==y)
			{
				cout<<0<<endl;
			}else{
				if (x>y)
				{
					cout<<leftcost[x-1]-leftcost[y-1]<<endl;
				}else{
					cout<<rightcost[x-1]-rightcost[y-1]<<endl;
				}
			}
		}
	}

	return 0;
}