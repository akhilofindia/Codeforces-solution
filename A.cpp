#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,a,q; cin>>n>>a>>q;
		char arr[q];
		int online=0,cnt=0;
		for (int i = 0; i < q; i++)
		{
			cin>>arr[i];
		}
		int flag=0;
		for (int i = 0; i < q; i++)
		{
			if (arr[i]=='-')
			{
				online--;
			}else{
				online++;
				cnt++;
			}
			if (online+a==n)
			{
				flag=1;
			}
		}
		if (flag==1 || n==a)
		{
			cout<<"YES"<<endl;
		}else if (cnt+a>=n)
		{
			cout<<"MAYBE"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}