#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int arr[n];
		int b[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			b[i]=arr[i];
		}
		sort(b,b+n);
		if (b[0]==arr[0])
		{
			cout<<"Bob"<<endl;
		}else{
			cout<<"Alice"<<endl;
		}
	}

	return 0;
}