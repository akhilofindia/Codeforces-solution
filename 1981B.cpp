#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

unsigned int ok(int a, int b) {
    unsigned int lower_bound = max(0,a - b);
    unsigned int upper_bound = a + b; 
    unsigned int mask = lower_bound ^ upper_bound;
    while (mask) {
        lower_bound |= mask;
        mask >>= 1;
    }
    return lower_bound;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int m,n;cin>>m>>n;
		cout<<ok(m,n)<<endl;
	}

	return 0;
}