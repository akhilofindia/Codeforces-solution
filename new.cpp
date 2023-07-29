#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		int a=*max_element(v.begin(),v.end());
		int cnt=0;
		for (int i = 0; i < n-1; i++)
		{
			if (v[i+1]<v[i])
			{
				while(v[i+1]<v[i]){
					v[i+1]=v[i+1]+a;
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}