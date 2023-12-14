#include <bits/stdc++.h>
using namespace std;
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k; cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int flag=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]%k==0)
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			cout<<0<<endl;
		}else{
			int ans=INT_MAX;
			int eve=0;
			for (int i = 0; i < n; i++)
			{
				if (arr[i]%2==0)
				{
					eve++;
				}
				ans=min(ans,k-(arr[i]%k));
			}
			eve=min(eve,2);
			if (k==4)
			{
				ans=min(ans,2-eve);
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}