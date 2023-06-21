#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int a[n],b[n];
		int flag=0;
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		for (int i = 0; i < n-1; i++)
		{
			if (a[i+1]<a[i])
			{
				flag=1;
				break;
			}
		}
		int zero=0;
		for (int i = 0; i < n; i++)
		{
			if (b[i]==0)
			{
				zero++;
			}
		}
		int one=n-zero;
		if ((one>=1 && zero>=1) || flag==0)
		{
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}