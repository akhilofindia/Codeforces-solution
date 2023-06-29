#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k,x; cin>>n>>k>>x;
		int flag=0;
		if (x!=1)
		{
			flag=1;
			cout<<"YES"<<endl;
			cout<<n<<endl;
			for (int i = 0; i < n; i++)
			{
				cout<<1<<" ";
			}
			cout<<endl;
		}else{
			if (n%2==0 && k>1)
			{
				cout<<"YES"<<endl;
				cout<<n/2<<endl;
				for (int i = 0; i < n/2; i++)
				{
					cout<<2<<" ";
				}
				cout<<endl;
			}else if (n%2!=0 && k>2)
			{
				cout<<"YES"<<endl;
				cout<<(n-3)/2+1<<endl;
				cout<<3<<" ";
				for (int i = 0; i <(n-3)/2 ; ++i)
				{
					cout<<2<<" ";
				}
				cout<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		
	}

	return 0;
}