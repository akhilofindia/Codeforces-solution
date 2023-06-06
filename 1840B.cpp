#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n,k; cin>>n>>k;
		long long cnt=(int)(log2)(n)+1;
		long long a=0;
		long long int temp;
		if (k>=cnt)
		{
			cout<<n+1<<endl;
		}else{
			temp=pow(2,k);
			cout<<temp<<endl;
		}
	}

	return 0;
}