#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		int cnt=0;
		while(n--){
			int a,b;cin>>a>>b;
			if (a>b)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}