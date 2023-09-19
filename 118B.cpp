#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	for (int i = 0; i < 2*n+1; i++)
	{
		for (int j = 0; j < 2*n+1; j++)
		{
			int cnt=n-abs(i-n)-abs(j-n);
			if (cnt<0)
			{
				cout<<" ";
			}else{
				cout<<cnt;
			}
			if (j==2*n-abs(i-n))
			{
				cout<<endl;
				break;
			}else{
				cout<<" ";
			}
		}
	}

	return 0;
}