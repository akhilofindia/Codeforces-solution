#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int arr[n];
	vector <int>v;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		if (arr[i]==1)
		{
			v.push_back(i);
		}
	}
	long long ans=1;
	if (v.size()==0)
	{
		cout<<0<<endl;
	}else{
		for (int i = 1; i < v.size(); i++)
		{
			ans*=(v[i]-v[i-1]);
		}
		cout<<ans<<endl;
	}

	
 

	return 0;
}