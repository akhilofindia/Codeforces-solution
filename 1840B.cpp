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
		for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        if(n==1)cout<<-1<<endl;
        else {
            for(int i=0;i<n;i++){
                if(a[i]==b[i]){
                    if(i==n-1)swap(b[i],b[i-1]);
                    else swap(b[i],b[i+1]);
                }
            }
            for(int i=0; i<n; i++)cout<<b[i]<<" ";
            cout<<endl;
 
        }
	}

	return 0;
}