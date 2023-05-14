#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		if (n%2!=0)
		{
			for (int i = 1; i <= n; i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}else{
			for (int i = 1; i <= n; i++)
			{
				cout<<2*i<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}