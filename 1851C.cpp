#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		int arr[n];
		map<int,int>mp;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			mp[arr[i]]++;
		}
		int num=mp[arr[n-1]];
		int num0=mp[arr[0]];
		int cnt=0;
		bool ans=true;
		if (num0-1<k || num<k)
		{
			ans=false;
		}
		if(arr[0]==arr[n-1]){
			ans=true;
		}
		if (num0-1>=k )
		{
			ans=true;
		}
		if (ans)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}