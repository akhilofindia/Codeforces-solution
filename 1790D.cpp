#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int a[n];
		map<int,int>mp;
		set<int>st;
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
			mp[a[i]]++; 
			st.insert(a[i]);
		}
		for (int i = 0; i < mp.size(); i++)
		{
			if (st.count(a[i]))
			{
				mp[a[i]]--;
			}
		}
		
	}

	return 0;
}