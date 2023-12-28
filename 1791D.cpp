#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		string s; cin>>s;
		set<char>st,st2;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			st.insert(s[i]);
			arr[i]=st.size();
		}
		int b[n];
		for (int i = n-1;i>= 0 ; i--)
		{
			st2.insert(s[i]);
			b[i]=st2.size();
		}
		int mx=0;
		for (int i = 0; i < n-1; i++)
		{
			mx=max(mx,arr[i]+b[i+1]);
		}
		cout<<mx<<endl;

	}

	return 0;
}