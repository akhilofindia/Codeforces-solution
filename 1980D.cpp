#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool isok(vector<int>&v){
	vector<int>ans(v.size()-1);
	for (int i = 0; i < v.size()-1; i++)
	{
		ans[i]=__gcd(v[i],v[i+1]);
	}
	for (int i = 1; i < v.size()-1; i++)
	{
		if (ans[i]<ans[i-1])
		{
			return false;
		}
	}
	return true;
}
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
		vector<int>gc;
		for (int i = 0; i < n-1; i++)
		{
			v.push_back(__gcd(arr[i],arr[i+1]));
		}
		// for (int i = 0; i < n-2; i++)
		// {
		// 	gc.push_back(__gcd(arr[i],arr[i+2]));
		// }
		int ind=-1;
		for (int i = 1; i < v.size()-1; i++)
		{
			if (v[i]<v[i-1])
			{
				ind=i;
				break;
			}
		}
		if (ind==-1)
		{
			cy;
		}else{
			int flag=0;
			for (int i = ind-1; i < ind+2; i++)
			{
				vector<int>v;
				for (int j = 0; j < n; j++)
				{
					if (j!=i)
					{
						v.push_back(arr[j]);
					}
				}
				if (isok(v))
				{
					flag=1;
					break;
				}
			}
			if (flag)
			{
				cy;
			}else cn;
		}
	}

	return 0;
}