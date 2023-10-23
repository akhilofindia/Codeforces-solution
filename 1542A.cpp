#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[2*n];
		int x=0;
		for (int i = 0; i < 2*n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < 2*n; i++)
		{
			if (arr[i]%2)
			{
				x++;
			}
		}
		if (x==n)
		{
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}