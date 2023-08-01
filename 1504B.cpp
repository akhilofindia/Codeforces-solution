#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string a,b;
		cin>>a>>b;
		int x=0,y=0;
		int flag=0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i]=='1')
			{
				x++;
			}else{
				x--;
			}
			if (b[i]=='1')
			{
				y++;
			}else{
				y--;
			}
			if (x!=y && x!=-y)
			{
				flag=1;
				break;
			}
		}
		if (flag==1 || x!=y)
		{
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}

	return 0;
}