#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int a[n],b[n];
		int cnt1=0,cnt2=0,cnt3=0;
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
			if (a[i]==1)
			{
				cnt1++;
			}
			if (b[i]==1)
			{
				cnt2++;
			}
			if (a[i]!=b[i])
			{
				cnt3++;
			}
		}
		if (cnt3==0)
		{
			cout<<0<<endl;
		}else if (cnt1==cnt2)
		{
			cout<<1<<endl;
		}else if (cnt3==abs(cnt1-cnt2))
		{
			cout<<abs(cnt1-cnt2)<<endl;
		}else{
			cout<<abs(cnt1-cnt2)+1<<endl;
		}

	}

	return 0;
}