#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int sub=111;
		int flag=0;
		while(n>=0){
			if (n%11==0 || n %111==0)
			{
				flag=1;
				break;
			}
			n-=111;
		}
		if (flag==1)
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}