#include <bits/stdc++.h>
using namespace std;

int main(){
	int a1,a2;
	cin>>a1>>a2;
	int ans=0;
	while(a1>0 && a2>0){
		if (a1==1 &&a2==1)
		{
			break;
		}
		if (a1>=a2)
		{
			ans++;
			a1-=2;
			a2++;
		}else{
			ans++;
			a2-=2;
			a1++;
		}
	}
	cout<<ans<<endl;

	return 0;
}