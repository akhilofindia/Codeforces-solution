#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		if (n%2==0)
		{
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
			int i=1,j=2*n;
			while(i%2!=0 && i<=n){
				cout<<i<<" "<<j<<endl;
				i+=2;
				j--; 
			}
			i=2;
			while(i<=n && j>n){
				cout<<i<<" "<<j<<endl;
				i+=2;
				j--;
			}
		}
	}

	return 0;
}