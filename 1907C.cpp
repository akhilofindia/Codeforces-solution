#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string a; cin>>a;
		map<char,int>mp;
		for (int i = 0; i < a.size(); i++)
		{
			mp[a[i]]++;
		}
		int mx=0;
		for (int i = 0; i < a.size(); i++)
		{
			if (mp[a[i]]>mx)
			{
				mx=mp[a[i]];
			}
		}
		cout<<max(n%2,mx-(n-mx))<<endl;
	}

	return 0;
}