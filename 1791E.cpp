#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int cnt=0;
		for (long long i = 0; i < n; i++)
		{
			if (arr[i]<0)
			{
				cnt++;
			}
		}
		if (cnt%2==0)
		{
			long long sum=0;
		    for (long long i = 0; i < n; i++)
		    {
				sum+=abs(arr[i]);
		 	}
			cout<<sum<<endl;
		}else{
			long long sum=0;
			for (int i = 0; i < n; i++)
			{
				arr[i]=abs(arr[i]);
				sum+=arr[i];
			}
			sort(arr,arr+n);
			cout<<sum-(2*arr[0])<<endl;
		}
		
	}

	return 0;
}