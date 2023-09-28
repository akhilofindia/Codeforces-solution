#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		vector<int>v;
		for (int i = 0; i < n/2; i++)
		{
			v.push_back(arr[i]);
			v.push_back(arr[n-i-1]);
		}
		if (n%2==1)
		{
			v.push_back(arr[n/2]);
		}
		for (int i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}