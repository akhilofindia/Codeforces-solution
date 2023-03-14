#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;cin>>n;
    double ans=0;
    for ( double i = 1; i <= n; i++)
    {
        ans += 1/i;
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;

	return 0;
}