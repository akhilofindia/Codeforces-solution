#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int n, int K)
{
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == K){
                count++;
            }
        }
 	}
 	f(arr,n,arr[j]);
    return count;
}

int main(){
	int tc;cin>>Tc;
	while(tc--){
		int n,k;cin>>n>>k;
	}

	return 0;
}