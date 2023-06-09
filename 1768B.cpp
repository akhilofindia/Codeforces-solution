#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int cnt=1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==cnt)
			{
				cnt++;
			}
		}
		cout<<(n-cnt+k)/k<<endl;
	}

	return 0;
}