#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
    	long long a, b;
    	long long sum1 = arr[0] * arr[1];
 	    long long sum2 = arr[n - 1] * arr[n - 2];
    	if (sum1 > sum2)
    	{
        	a = arr[0];
        	b = arr[1];
    	}
    	else
    	{
        	a = arr[n - 2];
        	b = arr[n - 1];
    	}
    	cout <<a*b<<endl;
		
	}

	return 0;
}