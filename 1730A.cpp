#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,c; cin>>n>>c;
		int arr[n];
		map <int,int> ans;
		int cost=0;
		int sum2=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			ans[arr[i]]++;
			sum2+=arr[i];
		}
		for (auto itr=ans.begin();itr!=ans.end();itr++)
		{
			if ((itr->second) >=c)
			{
				cost+=c;
			}else{
				cost+=(itr->second)*1;
			}
		}
		cout<<min(sum2,cost)<<endl;
	}

	return 0;
}