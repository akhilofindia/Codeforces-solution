#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int cnt=0;
		for (int i = 0; i < n; i++)
		{
			if (cnt*(cnt+1)>=2*n)
			{
				break;
			}
			cnt++;
		}
		int k=cnt*(cnt+1)/2;
		if (k==n+1)
		{
			cout<<cnt+1<<endl;
		}else{
			cout<<cnt<<endl;
		}
	}

	return 0;
}