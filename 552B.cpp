#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
    cin>>n;
	long long int c=0,i=9,j=1;
    while(n>i){
    	c=c+i*j;
    	n=n-i;
    	i=i*10;
    	j++;
    }
    cout<<c+j*n<<endl;

	return 0;
}