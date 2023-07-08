#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string a,b,c;
		cin>>a>>b>>c;
		char ans;
		int flag=0;
		for (int i = 0; i < 3; i++)
		{
			if (a[i]==b[i] && a[i]==c[i] && a[i]!='.')
			{
				ans=a[i];
				flag=1;
				break;
			}
		}
		if (a[0]==a[1] && a[1]==a[2] && a[1]!='.')
		{
			ans=a[0];
			flag=1;
		}
		if (b[0]==b[1] && b[1]==b[2] && b[1]!='.')
		{
			ans=b[0];
			flag=1;
		}
		if (c[0]==c[1] && c[1]==c[2] && c[1]!='.')
		{
			ans=c[0];
			flag=1;
		}
		if (a[0]==b[1] && b[1]==c[2] && b[1]!='.')
		{
			ans=b[1];
			flag=1;
		}
		if (a[2]==b[1] && b[1]==c[0] && b[1]!='.')
		{
			ans=b[1];
			flag=1;
		}

		if (flag==1)
		{
			cout<<ans<<endl;
		}else{
			cout<<"DRAW"<<endl;
		}
	}

	return 0;
}