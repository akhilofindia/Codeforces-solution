#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		int mx=-1,ans=0;
		for(int i=1;i<=n;i++){
			int a,b;
			cin>>a>>b;
			if (a<=10)
			{
				if (b>ans)
				{
					ans=b;
					mx=i;
				}
			}
		}
		cout<<mx<<endl;
	}

	return 0;
}