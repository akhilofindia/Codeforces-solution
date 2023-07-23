#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i =0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int ans=0,cnt=0;
		for (int i = 0; i < n; i++)
		{
			cnt++;
			if (cnt>=arr[i])
			{
				cnt=0;
				ans++;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}