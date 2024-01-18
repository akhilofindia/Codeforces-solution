#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	ll n; cin>>n;
	string s="";
	while(n>0 && n%7!=0){
		n-=4;
		s.push_back('4');
	}
	while(n>0 && n%7==0){
		n-=7;
		s.push_back('7');
	}
	if (n==0)
	{
		cout<<s<<endl;
	}else{
		cout<<-1<<endl;
	}

	return 0;
}