#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m,d;cin>>n>>m>>d;
		int ans=m-1;
		int arr[m];
		for (int i = 0; i < m; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < m-1; i++)
		{
			if (arr[i+1]-arr[i]>=d)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
		
	}

	return 0;
}