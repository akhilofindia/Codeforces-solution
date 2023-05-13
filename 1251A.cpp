#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin>>tc;
    while(tc--){
   		string s;
    	cin>>s;
    	set<char>ans;
    	for(int i=0; i<s.size(); i++)
    	{
    	    if(s[i]==s[i+1])
    	        i++;
    	    else{
    	        ans.insert(s[i]);
    	    }
    	}
    	for(auto it=ans.begin();it!=ans.end(); it++){
    		cout<<*it;
    	}
   		cout<<endl;
	}

	return 0;
}