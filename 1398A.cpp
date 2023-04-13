#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n;
		cin>>n;
        int ans[n];
        for(int i=0 ;i < n;i++){
           cin>>ans[i];  
        }
        if(ans[n-1]<ans[0]+ans[1]){
           cout<<"-1"<<endl;
        }else
           cout<<1<<" "<<2<<" "<<n<<endl;
	}

	return 0;
}