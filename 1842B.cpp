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
		for (int i = 0; i < n; i++)
		{
			if ((x|a[i])!=x)
			{
				break;
			}
			m|=a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if ((x|b[i])!=x)
			{
				break;
			}
			m|=b[i];
		}		
		for (int i = 0; i < n; i++)
		{
			if ((x|c[i])!=x)
			{
				break;
			}
			m|=c[i];
		}
		if (m==x)
		{
			cout<<"Yes"<<endl;
		}else
			cout<<"No"<<endl;
		
	}

	return 0;
}