#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int n; cin>>n;
	vector<int>a(n),b(n),c(2*n);
	b[1]=n;
	int mx=n;
	int mn=n;
	c[n]=1;
	int cnt=0;
	for (int i = 2; i <= n; i++)
	{
		cin>>a[i];
		b[i]=b[i-1]+a[i];
		mn=min(mn,b[i]);
		mx=max(mx,b[i]);
		if (b[i]<1 || b[i]>=2*n || mx-mn>=n)
		{
			cnt=1;
			break;
		}
		if (c[b[i]])
		{
			cnt=1;
			break;
		}else{
			c[b[i]]=1;
		}
	}
	if (cnt==1)
	{
		cout<<-1<<endl;
	}else{
		for (int i = 1; i <= n; ++i)
		{
			cout<<b[i]-mn+1<<" ";
		}
		cout<<endl;
	}

	return 0;
}