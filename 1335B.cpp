#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n,a,b; cin>>n>>a>>b;
		string s="abcdefghijklmnopqrstuvwxyz";
		int k=0;
		while(n--){
			cout<<s[k];
			k++;
			if (k==b)
			{
				k=0;
			}
		}
		cout<<endl;
	}

	return 0;
}