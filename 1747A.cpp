#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--)
	{
		long long n;
		cin>>n;
		long long ans=0,ans2=0;
		for(int i = 0; i<n; i++)
		{
			int a;
			cin>>a;
			if(a>=0){
				ans+=a;
			}
			else{
				ans2+=a;
			}
		}
		cout<<abs(ans+ans2)<<endl;
	}

	return 0;
}