#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int v[n];
		for (int i = 0; i < n; i++)
		{
			cin>>v[i];
		}
		int flag=0;
		for (int i = 0; i < n-2; i++)
		{
			if (v[i]<v[i+1] && v[i+1]>v[i+2])
			{
				cout<<"YES"<<endl;
				cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			cout<<"no"<<endl;
		}
	}

	return 0;
}