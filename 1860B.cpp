#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long m,k,a1,a;
		cin>>m>>k>>a1>>a;
		long long sum;
		sum=(a1+a*k);
		if (sum>=m)
		{
			cout<<0<<endl;
		}else{
			long long ans1,ans2,req,cnt,cnt2;
			ans1=min(a,m/k);
			req=k*ans1;
			m-=req;
			ans2=min(a1,m);
			m-=ans2;
			cnt=m/k, cnt2=m%k;
			if (cnt2==0)
			{
				cout<<cnt<<endl;
			}else if (k-cnt2<=ans2)
			{
				cout<<cnt+1<<endl;
			}else{
				cout<<cnt+cnt2<<endl;
			}
		}

	}

	return 0;
}