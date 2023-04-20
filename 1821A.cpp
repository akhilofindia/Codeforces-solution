#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string s;
		cin >> s;
		long long a=s.length();
        long long ans = 1;
        if (s[0]=='0')
        {
        	cout<<0<<endl;
        }else{
        	for (int i = 0; i < a; i++) {
         		if (i == 0 && s[i] == '?'){
         			ans*= 9;
         		}
         		else if (s[i] == '?'){
         			ans*= 10;
         		}
       		}
       		cout << ans <<endl;
    	}
	}      

	return 0;
}