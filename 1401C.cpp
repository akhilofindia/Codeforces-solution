#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n],b[n];
		int mn=INT_MAX;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			b[i]=arr[i];
			mn=min(mn,arr[i]);
		}
		sort(b,b+n);
		int flag=0;
		for (int i = 0; i < n; i++)
		{
			if (b[i]!=arr[i])
			{
				if (arr[i]%mn!=0)
				{
					flag=1;
				}
			}
		}
		if (flag==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	

	return 0;
}