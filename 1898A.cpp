#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k;cin>>n>>k;
		string s;cin>>s;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			if (s[i]=='B')
			{
				cnt++;
			}
		}
		if (k==0 && cnt==0)
		{
			cout<<0<<endl;
		}else if (k==0 && cnt!=0)
		{
			cout<<1<<endl;
			cout<<n<<" A "<<endl;
		}else if (cnt<k)
		{
			int ans=0;
			for (int i = 0; i < n; i++)
			{
				if (s[i]=='A')
				{
					ans++;
					if (ans==k-cnt)
					{
						cout<<1<<endl;
						cout<<i+1<<" B "<<endl;
						break;
					}
				}
			}
		}else if (cnt==k)
		{
			cout<<0<<endl;
		}else{
			int z=0;
			for (int i=n-1;i>=0;i--)
			{
				if (s[i]=='B')
				{
					z++;
					if (z==k)
					{
						cout<<1<<endl;
						cout<<i<<" A "<<endl;
						break;
					}
				}
			}
			
		}
	}

	return 0;
}