#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool isPerfectSquare(long double x)
{
    // Find floating polong long value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int main(){
	int tc; cin>>tc;
	while(tc--){
		long long n; cin>>n;
		long long arr[n];
		long long sum=0;
		for (long long i = 0; i < n; i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		if (isPerfectSquare(sum))
		{
			cy;
		}else{
			cn;
		}
	}

	return 0;
}