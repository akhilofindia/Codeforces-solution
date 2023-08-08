#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		if (n<k)
		{
			cout<<"NO"<<endl;
		}else if ((n-k+1)%2)
		{
			cout<<"YES"<<endl;
			for (int i = 0; i < k-1; i++)
			{
				cout<<1<<' ';
			}
			cout<<n-k+1<<endl;
		}else if (n-2*(k-1)>0 && (n-2*(k-1))%2==0)
		{
			cout<<"YES"<<endl;
			for (int i = 0; i < k-1; i++)
			{
				cout<<2<<" ";
			}
			cout<<n-2*(k-1)<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}