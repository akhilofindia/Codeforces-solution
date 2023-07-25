#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		int arr2[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			arr2[i]=arr[i];
		}
		sort(arr2,arr2+n);
		vector<int>odd,odd1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]%2==1)
			{
				odd.push_back(i);
			}
			if (arr2[i]%2==1)
			{
				odd1.push_back(i);
			}
		}
		int flag=0;
		sort(odd.begin(),odd.end());
		for (int i = 0; i < odd.size(); i++)
		{
			if (odd[i]!=odd1[i])
			{
				flag=1;
				break;
			}
		}
		if (flag)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}

	}

	return 0;
}