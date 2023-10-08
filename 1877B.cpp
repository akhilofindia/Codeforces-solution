#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k; cin>>n>>k;
		vector<pair<long long,long long>>vi;
		long long arr[n],arr2[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (long long i = 0; i < n; i++)
		{
			cin>>arr2[i];
		}
		for (long long i = 0; i < n; i++)
		{
			vi.push_back(make_pair(arr2[i],arr[i]));
		}
		sort(vi.begin(),vi.end());
		long long cost=k;
		long long g=n-1;
		for (long long i = 0; i < n; i++)
		{
			if(g>0){
				if (vi[i].first<k)
				{
					if (vi[i].second>g)
					{
						cost+=(vi[i].first*g);
						g=0;
					}else{
						cost+=(vi[i].first*vi[i].second);
						g-=vi[i].second;
					}
				}else{
					cost+=((g)*k);
					break;
				}
			}
		}
		cout<<cost<<endl;
	}

	return 0;
}