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
		int a[n],b[m];
		set<int>st;
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
			st.insert(a[i]);
		}
		vector<int>ans(m,0);
		for (int i = 0; i < m; i++)
		{
			int x; cin>>x;
			int cnt=x;
			int flag=true;
			while(flag){
				flag=false;
				vector<int>v;
				for (int it: st)
				{
					if (it<=cnt)
					{
						v.push_back(it);
					}
				}
				if (!v.empty())
				{
					cnt-=v.size();
					flag=true;
				}
			}
			ans[i]=cnt;
		}
		for (int i = 0; i < ans.size(); i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}

	return 0;
}