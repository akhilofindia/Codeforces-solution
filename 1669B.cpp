#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		map <int,int> ans;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			ans[arr[i]]++;
		}
		int flag=0;
		int cnt;
		for (int i=0;i<n;i++)
		{
			if (ans[arr[i]] >=3)
			{
				cnt=arr[i];
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			cout<<cnt<<endl;
		}else{
			cout<<-1<<endl;
		}
	}

	return 0;
}