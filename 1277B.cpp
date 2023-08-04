#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		vector<int>even;
		int cnt=0;
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			while(arr[i]%2==0 && mp[arr[i]]==0){
				mp[arr[i]]=1;
				cnt++;
				arr[i]/=2;
			}
		}
		cout<<cnt<<endl;

	}

	return 0;
}