#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<int>v;
		int ans;
		if (arr[0]==1)
		{
			ans=2;
		}else{
			ans=1;
		}
		for (int i = 1; i < n; i++)
		{
			ans++;
			if (arr[i]==ans)
			{
				ans++;
			}
		}
		cout<<ans<<endl;

	}

	return 0;
}