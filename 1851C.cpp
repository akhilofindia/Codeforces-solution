#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int x=0,y=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==arr[0])
			{
				x++;
			}
			if (arr[i]==arr[n-1] && x>=k)
			{
				y++;
			}
		}
		if (y>=k || (arr[0]==arr[n-1] && x>=k))
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}