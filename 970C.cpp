#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int ans=arr[k-1];
	// cout<<ans<<" ";
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]<=ans)
		{
			cnt++;
		}
	}
	if (k==0)
	{
		if (arr[0]==1)
		{
			cout<<-1<<endl;
		}else{
			cout<<1<<endl;
		}
	}else{
		if (cnt==k)
		{
			cout<<ans<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
	
	

	return 0;
}