#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		long long arr[n];
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		long long cnt=0;
		long long mn = INT_MAX;
		for (long long i=n-1;i>=0;i--)
		{
			if (arr[i]>mn)
			{
				long long ans=(ceil((double)arr[i]/mn));            //kitne operation m chota hojayega
				cnt+=(ans-1);
				mn=(floor((double)arr[i]/ans));                    //lower value
			}else{
				mn=arr[i];
			}
		}
		cout<<cnt<<endl;
	}

	return 0;
}