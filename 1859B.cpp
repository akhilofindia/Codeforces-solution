#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<pair<long long,long long>>v;
		while(n--){
			long long x;cin>>x;
			long long arr[x];
			for (long long i = 0; i < x; i++)
			{
				cin>>arr[i];
			}
			sort(arr,arr+x);
			v.push_back({arr[0],arr[1]});
		}
		long long mn=INT_MAX;
		long long sum=0;
		vector<long long>vii,vii2;
		for (long long i = 0; i < v.size(); i++)
		{
			vii.push_back(v[i].first);
		}
		for (long long i = 0; i < v.size(); i++)
		{
			vii2.push_back(v[i].second);
		}
		sort(vii2.begin(),vii2.end());
		for (long long i = 1; i < vii2.size(); i++)
		{
			sum+=vii2[i];
		}
		long long h=*min_element(vii.begin(),vii.end());
		sum+=h;
		cout<<sum<<endl;
	}

	return 0;
}