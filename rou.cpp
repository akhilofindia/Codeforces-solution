#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b; cin>>a>>b;
	string s;
	cin>>s;
	int mx=0;
	int cnt=0,cnt2=0;
	for (int i = 0; i < a; i++)
	{
		if (s[i]=='2' )
		{
			cnt++;
		}else if (s[i]=='0')
		{
			cnt=0;
			cnt2=0;
		}else{
			cnt2++;
			if (cnt2>b)
			{
				cnt++;
			}
		}
		mx=max(mx,cnt);
	}
	cout<<mx<<endl;

	return 0;
}