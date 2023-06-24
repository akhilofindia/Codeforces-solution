#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,x;cin>>n>>x;
		vector<int>a(n),b(n),c(n);
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>b[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin>>c[i];
		}
		int m=0;
		int q=0;
		int o=0;
		for (int i = 0; i < n; i++)
		{
			if (m|a[i]!=x)
			{
				break;
			}
			m=m|a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (q|b[i]!=x)
			{
				break;
			}
			q=q|b[i];
		}		
		for (int i = 0; i < n; i++)
		{
			if (o|c[i]!=x)
			{
				break;
			}
			o=o|c[i];
		}
		int p=m|q|o;
		if (p==x)
		{
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	return 0;
}