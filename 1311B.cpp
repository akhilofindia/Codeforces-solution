#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;cin>>n>>m;
		int arr[n],arr2[m];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin>>arr2[i];
		}
		sort(arr2,arr2+m);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[arr2[j]]<arr[arr2[j]-1])
				{
					swap(arr[arr2[j]],arr[arr2[j]-1]);
				}
			}
		}
		if (is_sorted(arr,arr+n))
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}