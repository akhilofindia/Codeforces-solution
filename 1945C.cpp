#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ll n;cin>>n;
		string s; cin>>s;
		ll one=0,zero=0;
		for (ll i = 0; i < n; i++)
		{
			if (s[i]=='1')
			{
				one++;
			}else zero++;
		}
		ll left0=0;
		ll left1=0;
		ll right0=zero;
		ll right1=one;
		ll final=-1;
		int cnt=INT_MAX;
		if ((n%2)+(n/2)<=right1)
		{
			cnt=n;
			final=0;
		}
		for (ll i = 0; i < n; i++)
		{
			if (s[i]=='1')
			{
				right1--;
				left1++;
			}else{
				right0--;
				left0++;	
			}
			ll leftcnt=left0+left1;
			ll rightcnt=right0+right1;
			if (((leftcnt/2)+(leftcnt%2)<=left0) && ((rightcnt%2)+(rightcnt/2)<=right1))
			{
				if (abs(rightcnt-leftcnt)<cnt)
				{
					cnt=abs(rightcnt-leftcnt);
					final=i+1;
				}
			}
		}
		cout<<final<<endl;

	}
	return 0;
}