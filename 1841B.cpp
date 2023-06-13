#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int cnt = 0;
		int last = arr[0];
		string ans = "1";
		for (int i = 1; i < n; i++)
		{
			if (cnt==0 && last<=arr[i] && arr[0]<=arr[i])
			{
				ans+='1';
				last=arr[i];
			}
			else if (cnt==0 && last>arr[i] && arr[i]<=arr[0])
			{
				ans+='1';
				last=arr[i];
				cnt=1;
			}
			else if(cnt==1 && arr[i]>=last && arr[0]>=arr[i])
			{
				ans+='1';
				last=arr[i];
			}else{
				ans+='0';
			}
		}
		cout<<ans<<endl;
	}
 

	return 0;
}