#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		map<int,int>ans;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			ans[arr[i]]++;
		}

		for (int i = 0; i < ans.size(); i++)
		{
			if (!ans.count(i))
			{
				cnt=1;
				break;
			}
			if (i+1<ans.size() && ans[i+1]>ans[i])
			{
				cnt=1;
				break;
			}
		}
		if (cnt==1)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}