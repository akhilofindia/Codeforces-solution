#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin>>n>>m;
	int cnt=0;
	while(n){
		n--;
		cnt++;
		if (cnt%m==0)
		{
			n++;
		}
	}
	cout<<cnt<<endl;

	return 0;
}