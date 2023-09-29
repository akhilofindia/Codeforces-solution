#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a,b,c;
		cin>>a>>b>>c;
		if (a>=c)
		{
			cout<<-1<<" "<<b<<endl;
		}else if (a*b<=c)
		{
			cout<<1<<" "<<-1<<endl;
		}else{
			cout<<1<<" "<<b<<endl;
		}
	}

	return 0;
}