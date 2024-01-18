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
		int n,m; cin>>n>>m;
		vector<int>va(n),vb(m);
		for (int i = 0; i < n; i++)
		{
			cin>>va[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin>>vb[i];
		}
		sort(va.begin(),va.end());
		sort(vb.begin(),vb.end());
		
		int cnt=0;
		int prea[n],preb[m];
		prea[0]=va[0];
		for (int i = 1; i < n; i++)
		{
			prea[i]=va[i]+prea[i-1];
		}
		preb[0]=vb[0];
		for (int i = 1; i < m; i++)
		{
			preb[i]=vb[i]+preb[i-1];
		}
		int sufa[n],sufb[m];
		sufa[n-1]=va[n-1];
		for (int i = n-2; i >= 1; i--)
		{
			sufa[i]=sufa[i+1]+va[i];
		}
		sufb[m-1]=vb[m-1];
		for (int i = m-2; i >= 1; i--)
		{
			sufb[i]=sufb[i+1]+vb[i];
		}
		int ans=-1;
		int sum=0;
		for (int i = 0; i <= n; i++)
		{
			if (i==0)
			{
				sum=sufb[m-n-i]-prea[n-1];
			}else if (i==n)
			{
				sum=sufa[0]-preb[n-1];
			}else{
				sum=sufa[n-i]+sufb[m-n-i]-prea[n-i-1]+preb[i-1];
			}
			ans=max(ans,sum);
		}
		cout<<ans<<endl;
	}

	return 0;
}