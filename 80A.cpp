#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int arr[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int count=0;
	for (int i = 0; i < 16; i++) {
		if (n == arr[i] && m == arr[i+1]){
			count++;
		}
	}
	if (count>0)
	{
		cout<<"YES"<<endl;
	}else
	    cout<<"NO"<<endl;

	return 0;
}	