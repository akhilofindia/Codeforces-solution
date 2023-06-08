#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,m,k; cin>>n>>m>>k;
		string a,b;
		cin>>a>>b;
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		string c="";
		int cnt=0,p=0;
		int i=0,j=0;
		int q=0;
		while(n>i && m>j){
			if ((a[i]<b[j] && p<k) || q==k)
			{
				c+=a[i];
				p++;
				i++;
				q=0;
			}else{
				c+=b[j];
				j++;
				p=0;
				q++;
		    }
		}
		cout<<c<<endl;
	}

	return 0;
}