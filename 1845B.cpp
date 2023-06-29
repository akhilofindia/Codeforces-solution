#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int a1,a2;
		cin>>a1>>a2;
		int b1,b2;
		cin>>b1>>b2;
		int c1,c2;
		cin>>c1>>c2;
		int cnt=1;
		if ((a1>b1 && a1>c1)||(b1>a1 && c1>a1))
		{
			cnt+=min(abs(b1-a1),abs(c1-a1));
		}
		if ((a2>b2 && a2>c2) || (b2>a2 && c2>a2))
		{
			cnt+=min(abs(b2-a2),abs(c2-a2));
		}
		cout<<cnt<<endl;
	}

	return 0;
}