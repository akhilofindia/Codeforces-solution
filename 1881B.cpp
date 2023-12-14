#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int arr[3];
		for (int i = 0; i < 3; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+3);
		int flag=false;
		int a=arr[0];
		int b=arr[1];
		int c=arr[2];
		if (b%a!=0 || c%a!=0)
		{
			flag=false;
			cout<<"NO"<<endl;
		}else{
			int cnt;
			cnt=b/a-1+c/a-1;
			if (cnt<4)
			{
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}

	return 0;
}