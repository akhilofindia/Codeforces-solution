#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,a;
    cin>>n>>a;
    long long count = 0;
    for(long long i = 1; i <= n; i++){
        count += i;
        long long ans = count-a;
        if(ans >= 0 && i+ans == n){
            cout<<ans<<endl;
        }
    }

	return 0;
}