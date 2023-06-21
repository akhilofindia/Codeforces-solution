#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		if (n==k)
		{
			cout<<1<<endl;
		}else if (n<k)
		{
			cout<<1<<endl;
		}else if(n%k==1){
			cout<<n<<endl;
		}
		else{
			for (int i = k; i > 0; i--)
			{
				if (n%i==0)
				{
					cout<<n/i<<endl;
					break;
				}
			}
		}
	}

	return 0;
}