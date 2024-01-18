#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int n,t; cin>>n>>t;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	int cnt=0;
	int j=0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
		if (sum<=t)
		{
			cnt++;
		}else{
			sum-=arr[j];        //if exceeds,subtract first count
			j++;
		}
	}
	cout<<cnt<<endl;

	return 0;
}