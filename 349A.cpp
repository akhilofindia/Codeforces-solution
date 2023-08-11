#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int cnt=0,ans=0;
	int flag=0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]==25)
		{
			cnt++;
		}else if (arr[i]==50)
		{
			ans++;
			cnt--;
		}else if (arr[i]==100)
		{
			if (ans>0)
			{
				ans--;
				cnt--;
			}else{
				cnt-=3;
			}
		}
		if (cnt<0 || ans<0)
		{
			flag=1;
		}
	}
	if (flag)
	{
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}

	return 0;
}