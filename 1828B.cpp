#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     if (a == 0){
//         return b;
//     }
//     return gcd(b % a, a);
// }

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++){
        result = __gcd(arr[i], result);	
    }
    return result;
}
int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = 0; i < n; ++i)
		{
			arr[i]=abs(arr[i]-(i+1));
		}
		sort(arr,arr+n);
		cout<<findGCD(arr,n)<<endl;
	}

	return 0;
}