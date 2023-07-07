#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		string a,b,c; 
		cin >> a >> b >> c; 
		char z='.'; 
		if (a[0]==a[1] && a[0]==a[2]) {
			z = a[0]; 
		} 
		if (c[0] == c[1] && c[0] == c[2]) {
			z = c[0]; 
		} 
		if (b[0] == b[1] && b[0] == b[2]) {
			z = b[0]; 
		} 
		for (int i = 0; i < 3; i++) { 
			if (a[i] == b[i] && a[i] == c[i]) {
				z = a[i]; 
			}
		} 
		if (a[0] == b[1] && a[0] == c[2]) { 
			z = a[0]; 
		} 
		if (c[0] == b[1] && c[0] == a[2]) {
			z = c[0]; 
		}  
		if (z != '.')
		{ 
			cout<<z<<endl; 
		}else{ 
			cout<<"DRAW"<<endl;  
		} 
	}

	return 0;
}