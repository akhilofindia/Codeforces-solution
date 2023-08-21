#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long vasya=0,petya=0;
	long long a,arr[100013];
	for (long long i = 1; i <= n; i++)
	{
		cin>>a;
		arr[a]=i;
	}
	long long m,b;
	cin>>m;
	while(m--){
		cin>>b;
		vasya+=arr[b];
		petya+=(n+1-arr[b]);
	}
	cout<<vasya<<" "<<petya<<endl;

	return 0;
}