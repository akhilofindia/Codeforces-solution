#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int sum=0;
		int x;
		for (int i = 0; i < n; i++)
		{
			cin>>x;
			sum+=x;
		}
		if (sum==n)
		{
			cout<<0<<endl;
		}else if (sum<n)
		{
			cout<<1<<endl;
		}else{
			cout<<sum-n<<endl;
		}
	}

	return 0;
}