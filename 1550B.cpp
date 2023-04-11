#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin >> tc;
    while(tc--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int ans=a*n; 
        int count=0;
        if (b>0)
        {
        	ans+=b*n;
        }else{
        	for(int i = 0; i < s.size(); i++){
            	if(s[i] != s[i-1]){
                	count++;
            	}
            }
            ans+=((count/2)+1)*b;
        }
        cout<<ans<<endl;
    }
	return 0;
}