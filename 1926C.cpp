#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
	int tc;cin>>tc;
	vector<int>v(2*1e5,0);
	v[1]=1; 
    for(int i = 2; i <= 2*1e5; i++){ 
        int sum=0; 
        int j=i;
        while(j>0){ 
            sum+=j%10; 
            j/=10; 
        } 
        v[i]=sum+v[i-1]; 
    }
	while(tc--){
		int n;cin>>n;
	    cout<<v[n]<<endl;
	}

	return 0;
}