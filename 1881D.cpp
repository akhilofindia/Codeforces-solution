#include <bits/stdc++.h>
using namespace std;

void div(int k,map<int,int>&mp){
	int i=2;
	while(k%2==0)
	{
		mp[2]++;
		k/=2;
	}
	//now only odd factors left
	for (int i = 3; i <= sqrt(k); ++i)
	{
		while(k%i==0){
			mp[i]++;
			k/=i;
		}
	}
	if (k>2)
	{
		mp[k]++;
	}
}
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		map<int,int>mp;
		int flag=false;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			div(arr[i],mp);
		}
		for (auto it: mp)
		{
			if (it.second%n!=0)       //prime factors should be distributed equally among all elements
			{
				flag=true;
				break;
			}
		}
		if (flag)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}