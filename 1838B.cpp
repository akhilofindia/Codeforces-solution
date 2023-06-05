#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		int a,b,c;
		int mx=INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (arr[i]==1)
			{
				a=i+1;
			}
			if (arr[i]==2)
			{
				b=i+1;
			}
			if (arr[i]>mx)
			{
				mx=arr[i];
				c=i+1;
			}
		}
		if ((c>a) && (c<b) || (c<a) && (c>b))
		{
			cout<<1<<" "<<1<<endl;
		}else if ((a>b) && (c>a) || (a<b) && (a>c))
		{
			cout<<a<<" "<<c<<endl;
		}else {
			cout<<b<<" "<<c<<endl;
		}
		
	}

	return 0;
}