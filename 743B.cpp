#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; cin>>n>>k;
	int count=1;
	while(k%2==0){
		k/=2;
		count++;
	}
	cout<<count<<endl;

	return 0;
}