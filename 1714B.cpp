#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int cnt=0;
		set <int> s;
		for (int i = n-1; i >=0 ; i--)
		{
			if (s.count(arr[i])==0)
			{
				s.insert(arr[i]);
			}else{
				cout<<i+1<<endl;
				break;
			}
		}
		if (s.size()==n)
		{
			cout<<0<<endl;
		}
	}

	return 0;
}