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
		ll a,b,c; cin>>a>>b>>c;
		ll cnt=a;
		cnt+=b/3;
		b%=3;
		ll flag=0;
		if (b==1)
		{
			if (c>1)
			{
				cnt++;
				c-=2;
			}else{
				flag=1;
			}
		}else if (b==2)
		{
			if (c==0)
			{
				flag=1;
			}else{
				cnt++;
				c--;
			}
		}
		cnt+=c/3;
		c%=3;
		if (flag)
		{
			cout<<-1<<endl;
		}else if (c==0)
		{
			cout<<cnt<<endl;
		}else{
			cout<<cnt+1<<endl;
		}

	}

	return 0;
}