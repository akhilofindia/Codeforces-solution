#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,k,x;cin>>n>>k>>x;
		if ( n<k || k>x+1)
		{
			cout<<-1<<endl;
		}else{
			int sum=0;
			int cnt=0;
			int ans=0;
			for (int i = 0; i < k; i++)
			{
				sum+=i;
				cnt++;
			}
			n-=cnt;
			if (x!=k)
			{
				for (int i = 0; i < n; i++)
				{
					sum+=x;
				}
			}else{
				for (int i = 0; i < n; i++)
				{
					sum+=(x-1);
				}
			}
			cout<<sum<<endl;
		}
	}

	return 0;
}