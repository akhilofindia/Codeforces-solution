#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		vector<int>v(n+1);
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			v[arr[i]]=i+1;
		}
		int cnt=0;
		for (int i = 1; i < n+1; ++i)
		{
			if (v[i-1]>v[i])
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}