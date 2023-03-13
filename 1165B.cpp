#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,ans=1;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
    	if (arr[i]>=ans)
    	{
    		ans++;
    	}
    }
    cout<<ans-1<<endl;
    

	return 0;
}