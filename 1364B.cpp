#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		vector<int>ans;
		ans.push_back(v[0]); 
		for (int i = 1; i < n-1; i++)
		{
			if ((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i+1]) && v[i]<v[i-1])
			{
				ans.push_back(v[i]);
			}
		}
		ans.push_back(v[n-1]);
		cout<<ans.size()<<endl;
		for (int i = 0; i < ans.size(); i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		
		
	}

	return 0;
}