#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int flag=0;
		int cnt1=0,cnt2=0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]%2)
			{
				if (cnt2>arr[i])
				{
					flag=1;
					break;
				}
				cnt2=arr[i];
			}else{
				if (cnt1>arr[i])
				{
					flag=1;
					break;
				}
				cnt1=arr[i];
			}
		}
		if (flag==1)
		{
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}

	return 0;
}