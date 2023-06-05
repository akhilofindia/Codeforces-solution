#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int ans=0;
		int count=2*arr[0]-1;
		for (int i = 0; i < n; i++)
		{
			ans+=(arr[i]/count);
			if (arr[i]%count==0)
			{
				ans--;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}