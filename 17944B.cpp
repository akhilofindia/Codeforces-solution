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
		for (int i = 0; i < n; i++)
		{
			if (arr[i]==1)
			{
				arr[i]++;
			}
		}
		for(int i=0;i <n-1; i++)
		{
			if (arr[i+1]%arr[i]==0)
			{
				arr[i+1]+=1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}