#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;cin>>n>>m;
		int arr[m];
		for (int i = 0; i < m; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+m);
		int diff[m];
		for (int i = 0; i < m; i++)
		{
			if (i==m-1)
			{
				diff[i]=n-arr[i]+arr[0]-1;
			}else{
				diff[i]=arr[i+1]-arr[i]-1;
			}
		}
		sort(diff,diff+m);
		reverse(diff,diff+m);
		int cnt=0,dd=1;
		for (int i = 0; i < m; i++)
		{
			int x=diff[i]-dd;
			if (x>0)
			{
				cnt+=x;
			}else if (x==0)
			{
				cnt++;
			}
			dd+=4;
		}
		cout<<n-cnt<<endl;
	}

	return 0;
}