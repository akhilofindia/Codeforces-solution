#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b;
	if (n%2==1)
	{
		cout<<0<<endl;
	}else if (n%4==0){
		cout<<n/4-1<<endl;
	}else
	    cout<<n/4<<endl;
	

	return 0;
}