#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		int ans[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			ans[i]=arr[i];
		}
		sort(ans,ans+n);
		if (n==1)
		{
			cout<<-1<<endl;
		}else{
			for (int i = 0; i < n; i++)
			{
				if (ans[i]==arr[i])
				{
					if (i==n-1)
					{
						swap(ans[i],ans[i-1]);
					}else{
						swap(ans[i],ans[i+1]);
					}
				}
			}
			for (int i = 0; i < n; i++)
			{
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}
		
	}

	return 0;
}