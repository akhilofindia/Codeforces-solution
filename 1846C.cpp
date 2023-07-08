#include <bits/stdc++.h>
using namespace std;

void fillPrefixSum(long long arr[], long long n, long long prefixSum[])
{
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}
 
bool a(pair<long long,pair<long long,long long>> x, pair<long long,pair<long long,long long>> y){
	if (x.second.first>y.second.first)
	{
		return true;
	}else if(x.second.first==y.second.first){
		if (x.second.second<y.second.second)
		{
			return true;
		}
	}
	return false;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,m,h; cin>>n>>m>>h;
		vector<pair<long long,pair<long long,long long>>> v;
		for(int j=0;j<n;j++){
			long long arr[m];
			for (int i = 0; i < m; i++)
			{
				cin>>arr[i];
			}
			sort(arr,arr+m);
			long long prefixsum1[m];
			fillPrefixSum(arr,m,prefixsum1);
			long long pt=0;
			long long pen=0;
			long long sum=0;
			for (long long i = 0; i < m; i++)
			{
				if (prefixsum1[i]<=h)
				{
					sum+=prefixsum1[i];
					pt=max(pt,i+1);
					pen=max(pen,sum);
				}
			}
			v.push_back({j,{pt,pen}});
		}
		sort(v.begin(),v.end(),a);
		// for (int i=0; i<v.size(); i++){
	 //        cout << v[i].first << ", " << v[i].second.first
  //           << ", " << v[i].second.second << endl;
  //   	}
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i].first==0)
			{
				cout<<i+1<<endl;
				break;
			}
		}
    	// cout<<endl;


	}


	return 0;
}