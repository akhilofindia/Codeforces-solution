#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,x;cin>>n>>x;
		int arr[n];
		for (int i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		int sum=0,mx=-1;
		for (int i = 1; i <= n; i++)
		{
			sum+=arr[i];
			if (sum%x!=0)
			{
				mx=max(mx,max(i,n-i));
			}
		}
		cout<<mx<<endl;
		
	}

	return 0;
}