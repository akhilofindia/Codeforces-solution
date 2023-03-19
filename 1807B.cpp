#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		long long mihai=0,bianca=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (arr[i]%2==0)
			{
				mihai+=arr[i];
			}else 
			    bianca+=arr[i];
		}
		if (mihai>bianca)
		{
			cout<<"YES"<<endl;
		}else
		    cout<<"NO"<<endl;
	}

	return 0;
}