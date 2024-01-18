#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int a,b; cin>>a>>b;
	int cnt=0;
	if (b%a!=0)
	{
		cnt=-1;
	}else{
		int c=b/a;
		while(c%3==0){
			c/=3;
			cnt++;
		}
		while(c%2==0){
			c/=2;
			cnt++;
		}
		if (c!=1)
		{
			cnt=-1;
		}
	}
	cout<<cnt<<endl;

	return 0;
}