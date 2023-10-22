#include <bits/stdc++.h>
using namespace std;

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
int main(){
	int tc;cin>>tc;
	while(tc--){
		long long n,k;cin>>n>>k;
		long long x=getSum(n); 
		if (x%k==0)
		{
			cout<<n<<endl;
		}else{
			for (long long i = n; i < INT_MAX; i++)
			{
				if (getSum(i)%k==0)
				{
					cout<<i<<endl;
					break;
				}
			}
		}

	}

	return 0;
}