#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		long long cnt=0;
		long long ans=0;
		long long flag=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
			cnt+=abs(arr[i]);
			if (arr[i]<0)
			{
				flag=1;
			}else if(arr[i]>0){
				if (flag==1)
				{
					ans++;
					flag=0;
				}
			}
		}
		if (flag==1)
		{
			ans++;
		}
		cout<<cnt<<" "<<ans<<endl;

	}

	return 0;
}