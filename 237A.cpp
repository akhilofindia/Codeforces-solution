#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	map<pair<int,int>,int>mp;
	int ans=0;
	while(n--){
		int a,b;cin>>a>>b;
		mp[{a,b}]++;
		ans=max(ans,mp[{a,b}]);
	}
	cout<<ans<<endl;

	return 0;
}