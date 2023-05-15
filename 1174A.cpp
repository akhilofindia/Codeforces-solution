#include <bits/stdc++.h>
using namespace std;

int main(){	
	int m; cin>>m;
	int n=2*m;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int count=0;
	if (arr[0]==arr[n-1])
	{
		cout<<-1<<endl;
	}else{
		for (int i = 0; i < n; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}