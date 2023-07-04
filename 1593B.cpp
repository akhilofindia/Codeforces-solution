#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n,k,ans;
		string s;
	  	cin>>s;
	  	ans=s.length()+1;
	  	for(int i=s.length()-1;i>=0;i--)
	  	{
	  		for(int j=i-1;j>=0;j--)
	  	  	{
	  	  	    if(s[i]=='0'&&s[j]=='0')
	  	    	{
	  	    		ans = min(ans,((int) s.size()-i-1) + (i-j-1));
	  	    	}
	  	    	if(s[i]=='0'&&s[j]=='5')
		    	{
		    	    ans = min(ans,((int) s.size()-i-1) + (i-j-1));
	    		}
	      		if(s[i]=='5'&&s[j]=='2')
	      		{
	      			ans = min(ans,((int) s.size()-i-1) + (i-j-1));
	      		}
	      		if(s[i]=='5'&&s[j]=='7')
	      		{
	      	  		ans = min(ans,((int) s.size()-i-1) + (i-j-1));
	     		}
	     	}
	  	}
	  cout<<ans<<'\n';
	}

	return 0;
}