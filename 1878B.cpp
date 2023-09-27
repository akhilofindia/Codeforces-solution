#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n]; 
		arr[0]=6;
		arr[1]=8;
		for (int i = 2; i < n; i++)
		{
			arr[i]=2*i+6;
			if ((3*arr[i])%(arr[i-1]+arr[i-2]))
			{
				arr[i]++;
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