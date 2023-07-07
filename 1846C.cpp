#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,m,h; cin>>n>>m>>h;
		int a[n],b[n],c[n];
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
		sort(a,a+n); 
		sort(b,b+n);
		sort(c,c+n);

		int presum1[n];
		presum1[0]=a[0];
		for (int i = 1; i < n; i++)
		{
			presum1[i]=presum1[i-1]+a[i];
		}

		int presum2[n];
		presum2[0]=b[0];
		for (int i = 1; i < n; i++)
		{
			presum2[i]=presum2[i-1]+b[i];
		}

		int presum3[n];
		presum3[0]=c[0];
		for (int i = 1; i < n; i++)
		{
			presum3[i]=presum3[i-1]+a[i];
		}
		int cnt1=0;
		int ans1=0;
		int ans2=0;
		int ans3=0;
		for (int i = 0; i < n; i++)
		{
			if (presum1[i]<=h)
			{
				cnt1=max(cnt1,i+1);
				ans1=max(ans1,presum1[i]);
			}
		}
		int cnt2=0;
		for (int i = 0; i < n; i++)
		{
			if (presum2[i]<=h)
			{
				cnt2=max(cnt2,i+1);
				ans2=max(ans2,presum2[i]);
			}
		}
		int cnt3=0;

		for (int i = 0; i < n; i++)
		{
			if (presum3[i]<=h)
			{
				cnt3=max(cnt3,i+1);
				ans3=max(ans3,presum3[i]);
			}
		}
		if (cnt1>cnt2 && cnt1>cnt3)
		{
			cout<<1<<endl;
		}else if ((cnt1<cnt2 && cnt1>cnt3) || cnt1<cnt3 && cnt1>cnt2)
		{
			cout<<2<<endl;
		}else if (cnt1<cnt2 && cnt1<cnt3)
		{
			cout<<3<<endl;
		}else if (cnt1==cnt2 && cnt1>cnt3)
		{
			if (ans1>ans2)
			{
				cout<<2<<endl;
			}else{
				cout<<1<<endl;
			}
		}else if (cnt1==cnt3 && cnt1>cnt2)
		{
			if (ans1>ans3)
			{
				cout<<2<<endl;
			}else{
				cout<<2<<endl;
			}
		}
	}

	return 0;
}