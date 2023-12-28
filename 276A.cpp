#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	int mn=INT_MIN;
	while(n--){
		int x,y; cin>>x>>y;
		int ans;
		if (y>k)
		{
			ans=x-y+k;
		}else{
			ans=x;
		}
		mn=max(mn,ans);
	}
	cout<<mn<<endl;

	return 0;
}