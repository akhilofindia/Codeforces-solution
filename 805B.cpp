#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >>a;
	for(int i = 0; i < a ;i++){
		if(i%4==0||i%4==1){
			cout<<'a';
		}else{
			cout<<'b';
		}	
	}

	return 0;
}