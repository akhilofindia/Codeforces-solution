#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k,count=0,ans=0;
		cin>>n>>k;
		int arr[n];
		for (int i = 1; i <= n; i++)
		{
		 	cin>>arr[i];
		} 
		for (int i = 1; i <= n; i++)
		{
			if (abs(arr[i]-i)%k==0)
		 	{
		 		count++;
		 	}else
		 	    ans++;
		}
		if (ans==0)
		{
			cout<<0<<endl;
		}else if (ans<3)
		{
			cout<<1<<endl;
		}else
		    cout<<-1<<endl;
	}

	return 0;
}