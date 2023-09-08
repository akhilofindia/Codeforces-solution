#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int l,r;cin>>l>>r;
		int f=-1,flag=0;
		int cnt;
		for (int i = l; i <= r; i++)
		{
			if (i!=2)
			{
				if (i%2==0)
				{
					f=i;
					break;
				}
			}
		}
		if (f!=-1)
		{
			cout<<f/2<<" "<<f/2<<endl;
		}else{
			for (int i = 2; i <= sqrt(r); i++)
			{
				if (__gcd(i,r-i)!=1)
				{
					cnt=i;
					flag=1;
					break;
				}
			}
			if (flag)
			{
				cout<<cnt<<" "<<r-cnt<<endl;
			}else{
				cout<<-1<<endl;
			}
		}
		
	}

	return 0;
}