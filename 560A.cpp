#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin>>n;
	int arr[n];
	int count=0;
    for (int i = 1; i <=n ; i++) {
        cin>>arr[i];
        if (arr[i]==1){
            count=1;
        }
    }
    if (count==1){
        cout<<-1<<endl;
    }
    else
        cout<<1<<endl;

	return 0;
}