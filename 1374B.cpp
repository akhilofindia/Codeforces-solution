#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int cnt=0,ans=0;
		while(n%2==0){
			n/=2;
			cnt++;
		}
		while(n%3==0){
			n/=3;
			ans++;
		}
		if (n!=1 || cnt>ans)
		{
			cout<<-1<<endl;
		}else{
			cout<<2*ans-cnt<<endl;
		}
	}

	return 0;
}