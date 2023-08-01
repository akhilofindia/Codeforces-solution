#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	map<int,int>mp;
	int cnt=0;
	for (int i = 0; i < n; i++)
	{
		while(mp.count(arr[i])){
			arr[i]++;
			cnt++;
		}
		mp[arr[i]]=1;
	}
	cout<<cnt<<endl;

	return 0;
}