#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k ;cin>>n>>k;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		vector<int>diff;
		for (int i = 0; i < n-1; i++)
		{
			diff.push_back(arr[i+1]-arr[i]);
		}
		long long mx=0; 
		int cnt=0;
		for (int i = 0; i < diff.size(); i++)
		{
			if (diff[i]<=k)
			{
				cnt++;
				if (cnt>mx)
				{
					mx=cnt;
				}
			}else{
				cnt=0;
			}
		}
		cout<<n-mx-1<<endl;
		
	}

	return 0;
}