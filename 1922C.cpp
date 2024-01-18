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
		int arr[n+1];
		for (int i = 1; i < n+1; i++)
		{
			cin>>arr[i];
		}
		int pre[n+1],suf[n+1];
		pre[1]=0;
		pre[2]=1;
		for (int i = 2; i <= n; i++)
		{
			int l=abs(arr[i]-arr[i-1]);
			int r=abs(arr[i]-arr[i+1]);
			if (l>r)
			{
				pre[i+1]=1+pre[i];
			}else{
				pre[i+1]=pre[i]+r;
			}
		}
		suf[n]=0;
		suf[n-1]=1;
		for (int i = n-1;i >= 2; i--)
		{
			int l=abs(arr[i]-arr[i-1]);
			int r=abs(arr[i]-arr[i+1]);
			if (l<r)
			{
				suf[i-1]=1+suf[i];
			}else{
				suf[i-1]=l+suf[i];
			}
		}
		int q; cin>>q;
		while(q--){
			int x,y; cin>>x>>y;
			if (x>y)
			{
				cout<<abs(suf[x]-suf[y])<<endl;
			}else{
				cout<<abs(pre[x]-pre[y])<<endl;
			}
		}


	}

	return 0;
}