#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		if (n==1)
		{
			cout<<1<<endl;
		}else if (n%2!=0)
		{
			cout<<-1<<endl;
		}else{
		    for (int i = 0; i < n/2; i++)
		    {
			    cout<<2*i+2<<" "<<2*i+1<<" ";
		    }
		    cout<<endl;
		}
	}

	return 0;
}