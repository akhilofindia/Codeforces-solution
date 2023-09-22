#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		char arr[11][11];
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cin>>arr[i][j];
			}
		}
		int sum=0;
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				if (arr[i][j]=='X')
				{
					// cout<<i<<" "<<j<<endl;
					if (i<6)
					{
						if (j<6)
						{
							sum+=min(i,j);
						}else{
							sum+=min(i,11-j);
						}
					}else{
						if (j<6)
						{
							sum+=min(11-i,j);
						}else{
							sum+=min(11-i,11-j);
						}
					}
				}
			}
		}
		cout<<sum<<endl;
	}

	return 0;
}