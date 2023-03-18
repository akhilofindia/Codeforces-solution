#include <bits/stdc++.h>
using namespace std;

int main(){
	long long tc; cin>>tc;
	while(tc--){
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long moves=0;
		long long count=d-b;
		long long f=(a+(d-b));
		long long ans=abs(f-c);
		if (b>d)
		{
			cout<<-1<<endl;
		}else if (c>f)
		{
			cout<<-1<<endl;
		}else
		    cout<<d-b+ans<<endl;
	}

	return 0;
}