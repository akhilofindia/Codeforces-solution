#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin>>tc;
    while(tc--){
    	int n;
        cin>>n;
        int arr[n];
        map<int,int>ans;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            ans[arr[i]]++;
        }
        int count=0;
        for(auto itr=ans.begin(); itr!= ans.end(); itr++){
            if(itr->second > 1){
                count=1;
            }
        }
        if(count==1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        
    }

	return 0;
}