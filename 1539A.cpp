#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin>>tc;
    while(tc--){
    	long long n,a,b;
    	long long count=0,ans;
    	cin>>n>>a>>b;
    	ans=min(n-1,b/a);
    	count=ans*(n-ans)+ans*(ans-1)/2;
    	cout<<count<<endl;
    }

	return 0;
}