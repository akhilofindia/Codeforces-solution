#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		int cnt=0;
		for (int i = 1; i <= n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 1; i <= n; i++)
		{
			if (arr[i]==i)
			{
				cnt++;
			}
		}
		if (cnt%2==0)
		{
			cout<<cnt/2<<endl;
		}else{
			cout<<cnt/2+1<<endl;
		}
		// cout<<cnt<<endl;
	}

	return 0;
}