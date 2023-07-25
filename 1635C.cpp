#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		if (is_sorted(arr+1,arr+n+1))
		{
			cout<<0<<endl;
		}else if (arr[n-1]>arr[n] || arr[n]<0)
		{
			cout<<-1<<endl;
		}else{
			cout<<n-2<<endl;
			for (int i = 1; i <= n-2; i++)
			{
				cout<<i<<" "<<n-1<<" "<<n<<endl;
			}
		}
	}

	return 0;
}