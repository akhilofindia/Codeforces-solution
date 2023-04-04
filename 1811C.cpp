#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--)
 	{
		int n; cin>>n;
	    long long  y = 0;
		for (int i = 0; i < n-1; i++)
		{
			long long x;
			cin>>x;
			if (i==0)
			{
				cout<<x<<" ";
			}else{
			    cout<<min(x,y)<<" ";
			}
			y=x;
			if (i==n-2){
				cout<<x<<endl;
		    }
		}
	}

	return 0;
}