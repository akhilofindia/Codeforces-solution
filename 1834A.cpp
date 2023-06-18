#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		long long sum=0;
		long long product=1;
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
			product*=arr[i];
		}
		if (sum<0) 
        {    
            int z=abs(sum)/2+abs(sum)%2;
            if (z%2==1)
            {
            	product=-product;
            }
            if (product==1)
            {
            	cout<<z<<endl;
            }else{
            	cout<<z+1<<endl;
            }
        }else{
        	if (product==-1)
        	{
        		cout<<1<<endl;
        	}else{
        		cout<<0<<endl;
        	}
        }
	}

	return 0;
}