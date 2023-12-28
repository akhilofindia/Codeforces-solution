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
		int arr[n];
		set<int>st;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			st.insert(arr[i]);
		}
		if (st.size()==2)
		{
			cout<<n/2+1<<endl;
		}else{
			cout<<n<<endl;
		}



	}

	return 0;
}