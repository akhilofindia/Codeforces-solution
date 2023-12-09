#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int b;cin>>b;
		int par=abs(b)%2;
		int sum=b;
		int mx=sum;
		for (int i = 1; i < n; i++)
		{
			int a;
			cin>>a;
			if (abs(a)%2!=par)
			{
				sum+=a;
			}else{
				sum=a;
			}
			if (a>sum)
			{
				sum=a;
			}
			par=abs(a)%2;
			mx=max(sum,mx);
		}
		cout<<mx<<endl;

	}

	return 0;
}