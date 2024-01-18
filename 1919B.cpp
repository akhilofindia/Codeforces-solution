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
		long long n; cin>>n;
		string s; cin>>s;
		long long cnt=0;
		for (long long i = 0; i < n; i++)
		{
			if (s[i]=='+')
			{
				cnt++;
			}else{
				cnt--;
			}
		}
		cout<<abs(cnt)<<endl;
	}

	return 0;
}