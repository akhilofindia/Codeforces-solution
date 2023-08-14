#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int a[n],b[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		b[0]=a[0];
		int flag=0;
		for (int i = 1; i < n; i++)
		{
			int a1=a[i]+b[i-1];
			int a2=b[i-1]-a[i];
			if (a1>=0 && a2>=0 && a1!=a2)
			{
				cout<<-1<<endl;
				flag=1;
				break;
			}else{
				if (a1>=0)
				{
					b[i]=a1;
				}else{
					b[i]=a2;
				}
			}
		}
		if (!flag)
		{
			for (int i = 0; i < n; i++)
			{
				cout<<b[i]<<" ";
			}
			cout<<endl;
		}


	}

	return 0;
}