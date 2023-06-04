#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		string s; cin>>s;
    	sort(s.begin(), s.end());
    	int n=s.size();
    	if(s[0] == s[n-1])
    	{
    	    cout <<-1<< endl;
    	}
    	else{ 
    		cout << n-1 << endl;
    	}	
	}

	return 0;
}