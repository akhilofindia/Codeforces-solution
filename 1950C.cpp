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
		string s; cin>>s;
		int hours=stoi(s.substr(0,2));
		int min=stoi(s.substr(3,2));
		string p;
		if (hours>=12)
		{
			p="PM";
		}else p="AM";
		if (hours==0)
		{
			hours=12;
		}else if (hours>12)
		{
			hours-=12;
		}
		string final=to_string(hours)+":"+to_string(min)+" "+p;
		if (hours<10)
		{
			final="0"+final;
		}
		if (min<10)
		{
			final.insert(3,"0");
		}
		cout<<final<<endl;

	}

	return 0;
}