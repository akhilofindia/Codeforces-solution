#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int one=0,zero=0;
	int mx=-1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]==1)
		{
			one++;
			if (zero>0)
			{
				zero--;
			}
		}
		if (arr[i]==0)
		{
			zero++;
		}
		if (zero>mx)
		{
			mx=zero;
		}
	}
	if (one==n)
	{
		cout<<one-1<<endl;
	}else{
		cout<<mx+one<<endl;
	}

	return 0;
}