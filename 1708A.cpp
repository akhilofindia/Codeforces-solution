#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n]; 
		int count=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 1; i < n; i++)
		{
			if (arr[i]%arr[0]!=0)
			{
				count=1;
				break;
			}
		}
		if (count==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}