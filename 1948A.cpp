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
		int n;cin>>n;
		if (n%2==1)
		{
			cn;
		}else{
			cy;
			for (int i = 0; i < n/2; i++)
			{
				cout<<char('A'+i)<<char('A'+i);
			}
			cout<<endl;
		}
	}

	return 0;
}