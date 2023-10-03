#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		for (int i = 2; i <=29; i++)
		{
			int p=pow(2,i)-1;
			if (n%p==0)
			{
				cout<<n/p<<endl;
				break;
			}
		}
	}

	return 0;
}