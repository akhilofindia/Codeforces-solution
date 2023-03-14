#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int k = (n/2);
        // int i=1;
        for (int i = 1; i <= n/2; i++)
        {
        	 cout << arr[i]<<" "<<arr[0]<<endl;
        }
        // while(k--){
        //     cout << arr[i]<<" "<<arr[0]<<endl;
        //     i++;
        // }
    }

	return 0;
}