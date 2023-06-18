#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string c,d;
		cin>>c>>d;
		if (d.size()!=c.size())
		{
			cout<<d[0]-'0'+9*(d.size()-1)<<endl;
		}else{
			long long ans=0;
			for (int i = 0; i < c.size(); i++)
			{
				if (d[i]>c[i])
				{
					ans+=(d[i]-'0')-(c[i]-'0') + 9*(c.size()-1-i);
					break;
				}
			}
			cout<<ans<<endl;
		}
	}

	return 0;
}