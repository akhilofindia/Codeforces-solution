#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n;cin>>n;
		vector<long long>arr(n);
		long long flag=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
			if (arr[i]==0)
			{
				if (flag==0)
				{
					arr[i]+=1;
					flag=1;
				}
			}
		}
		long long k=*min_element(arr.begin(),arr.end());
		if (flag==0)
		{
			long long prod=1;
			for (long long i = 0; i < n; i++)
			{
				prod*=arr[i];
			}
			prod/=k;
			prod*=(k+1);
			cout<<prod<<endl;
		}else{
			long long product=1;
			for (long long i = 0; i < n; i++)
			{
				product*=arr[i];
			}
			cout<<product<<endl;
		}
	}

	return 0;
}