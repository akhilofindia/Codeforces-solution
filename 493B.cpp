#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	ll ca=0,cb=0;
	vector<ll>a,b;
	ll temp;
	for (ll i = 0; i < n; i++)
	{
		cin>>temp;
		if (temp>0)
		{
			a.push_back(temp);
			ca+=temp;
		}else{
			b.push_back(-1*temp);
			cb+=-1*temp;
		}
	}
	if (ca==cb)
	{
		if (a==b)
		{
			if (temp<0)
			{
				cout<<"second"<<endl;
			}else cout<<"first"<<endl;
		}else if (a>b)
		{
			cout<<"first"<<endl;
		}else{
			cout<<"second"<<endl;
		}
	}else{
		if (ca>cb)
		{
			cout<<"first"<<endl;
		}else{
			cout<<"second"<<endl;
		}
	}

	return 0;
}