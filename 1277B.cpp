#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		vector<int>even;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (arr[i]%2==0)
			{
				even.push_back(arr[i]);
			}
		}
		int cnt=0;
		sort(even.begin(),even.end());
		for (int i = 0; i < even.size(); i++)
		{
			int k=*max_element(even.begin(),even.end());
			if (even[i]==k)
			{
				even[i]/=2;
			}
			cnt++;
			if (even[i]%2==1)
			{
				even[i]==0;
			}
		}

	}

	return 0;
}