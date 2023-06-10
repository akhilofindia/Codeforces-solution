#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,m; cin>>n>>m;
		int a=n*m;
		int arr[a];
		int mx,my;
		for (int i = 0; i < a; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+a);
		mx=arr[a-1];
		my=arr[0];
		int myy=arr[1];
		int mxx=arr[a-2];
		int b=mx-my;
		cout<<(a-min(n,m))*(mx-my)+(min(n,m)-1)*max(mx-myy,mxx-my)<<endl;
	}
	

	return 0;
}