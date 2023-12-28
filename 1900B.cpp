#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b,c; cin>>a>>b>>c;
		if (abs(b-c)%2==0)
		{
			cout<<"1 ";
		}else{
			cout<<"0 ";
		}
		if (abs(a-c)%2==0)
		{
			cout<<"1 ";
		}else{
			cout<<"0 ";
		}
		if (abs(b-a)%2==0)
		{
			cout<<"1 ";
		}else{
			cout<<"0 ";
		}
		cout<<endl;
	}

	return 0;
}