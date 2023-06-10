#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin>>n;
        string s; cin>>s;
        vector<int>arr;
        bool cnt=false;
        for(int i = 0;i < n/2; i++)
        {
           if (s[i]!=s[n-i-1])
           {
           		arr.push_back(i);
           }
        }
        int z=arr.size();
        for(int i = 0; i < z-1; i++)
        {
            if(arr[i+1]-arr[i]!=1){
                cnt=true;
                break;
            }
        }
        if(cnt==true){
            cout<<"NO"<<endl;
        }else{
        	cout<<"YES"<<endl;
        }		
	}

	return 0;
}