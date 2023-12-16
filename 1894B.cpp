#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		bool flag=false;
		int cnt=0;
		int x,y;
		vector<int>ans;
		for (auto it: mp)
		{
			if (it.second>1)
			{
				ans.push_back(it.first);
			}
		}
		if (ans.size()<2)
		{
			cout<<-1<<endl;
		}else{
			for (int i = 0; i < n; i++)
			{
				if (arr[i]==ans[0])
				{
					cout<<2<<" ";
					ans[0]=-1;
				}else if (arr[i]==ans[1])
				{
					cout<<3<<" ";
					ans[1]=-1;
				}else{
					cout<<1<<" ";
				}
			}
			cout<<endl;
		}
	}

	return 0;
}