#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k; cin>>n>>k;
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<int>v;
		map<int,int>mp;
		set<int>st;
		for (int i = 0; i < n; i++)
		{
			mp[arr[i]]++;
		}
		for (auto itr: mp)
		{
			if (itr.second>=k)
			{
				st.insert(itr.first);
			}
		}
		if (st.empty())
		{
			cout<<-1<<endl;
		}else{
			int mx=0,l=0,r=0,cnt=0,ans=-1;
			for (int x:st)
			{
				if (x==ans+1)
				{
					cnt++;
				}else{
					cnt=1;
				}
				if (cnt>mx)
				{
					mx=cnt;
					l=x-cnt+1;
					r=x;
				}
				ans=x;
			}
			cout<<l<<" "<<r<<endl;
		}
		
	}

	return 0;
}