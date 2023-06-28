#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		vector <int> v,v2;
		sort(a,a+n);
		int i=0;
		while(i<=n){
			if (a[i]+1==a[i+1])
			{
				v.push_back(a[i]);
				v.push_back(a[i+1]);
				i++;
			}else{
				v2.push_back(a[i]);
				i++;
			}
		}
		for (int i = 0; i < v.size(); i++)
		{
			cout<<v[i]<<" ";
		}
	}

	return 0;
}