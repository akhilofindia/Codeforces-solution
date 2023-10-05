#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int even=0,odd=0;
		for (int i = 0; i < n; i++)
		{
			if (i%2!=arr[i]%2)
			{
				if (arr[i]%2==0)
				{
					even++;
				}else{
					odd++;
				}
			}
		}
		if (even!=odd)
		{
			cout<<-1<<endl;
		}else{
			cout<<even<<endl;
		}
	}

	return 0;
}