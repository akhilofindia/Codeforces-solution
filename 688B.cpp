#include <bits/stdc++.h>
using namespace std;

int main(){
	string a; cin>>a;
	string b=a;
	reverse(b.begin(),b.end());
	string c=a+b;
	cout<<c<<endl;

	return 0;
}