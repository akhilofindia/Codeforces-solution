#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		set<int>st;
		for (int i = 0; i < n; i++)
		{
			st.insert(arr[i]);
		}
		if (st.size()==n)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}