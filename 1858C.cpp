#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		map<int,int>mp;
		for (int i = 1; i <=n; i++)
		{
			int j=i;
			while(j<=n && mp[j]!=1){
				cout<<j<<" ";
				mp[j]++;
				j*=2;
			}
		}
		cout<<endl;		
	}

	return 0;
}