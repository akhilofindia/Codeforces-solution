#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	map<int,int>mp;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	int cnt=0,mx=INT_MIN;
	for (auto i:mp)
	{
		mx=max(i.second,mx);
	}
	cout<<mx<<" "<<mp.size()<<endl;;

	return 0;
}