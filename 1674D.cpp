#include <bits/stdc++.h>
using namespace std;

int arraySortedOrNot(int a[], int n)
{
    if (n == 1 || n == 0) {
        return 1;
    }
    return a[n - 1] >= a[n - 2]
           && arraySortedOrNot(a, n - 1);
}
 
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n; cin>>n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		for (int i = n-1; i>0 ;i-=2)
		{
			if (arr[i]<arr[i-1])
			{
				swap(arr[i],arr[i-1]);
			}
		}
		if (arraySortedOrNot(arr,n))
		{
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}