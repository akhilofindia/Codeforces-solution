#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int a,b,n; cin>>a>>b>>n;
	int cnt=0;
	for (int i = 0; i < 10; i++)
	{
		if ((a*10+i)%b==0)
		{
			cout<<a*10+i;
			cnt=1;
			break;
		}
	}
	if (cnt==1)
	{
		for (int i = 0; i < n-1; i++)
		{
			cout<<0;
		}
		cout<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}