#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m;cin>>n>>m;
		int cnt=0;
		int a[n+1],b[m+1];
		for (int i = 1; i <= n; i++)
		{
			cin>>a[i];
		}
		for (int i = 1; i <= m; i++)
		{
			cin>>b[i];
		}
		int c[n];
		for (int i = 1; i <= n; i++)
		{
			c[i]=b[a[i]];
		}
		sort(c+1,c+n+1);
		int j=1;
		for (int i = n; i >= 1; i--)
		{
			if (b[j]<c[i])
			{
				cnt+=b[j];
				j++;
			}else{
				cnt+=c[i];
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}