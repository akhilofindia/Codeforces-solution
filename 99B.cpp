#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int arr[n];
	set <int> ans;
	int diff;
	map<int,int> mp;
	int x,y;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		ans.insert(arr[i]);
		mp[arr[i]]++;
	}
    if(ans.size()==1){
        cout<<"Exemplary pages.";
    }  
    if (ans.size()==2){
        vector<int>a;
        for (auto i: ans){
            a.push_back(i);
        }
        if ((a[0]+a[1])%2!=0){
            cout<<"Unrecoverable configuration."<<endl;
        }else if(mp[a[0]]!=1 || mp[a[1]]!=1){ 
        	cout<<"Unrecoverable configuration.";
    	}else {
        	for(int i=0; i<n; i++){
            	if(arr[i]==a[0]){
           	    	x=i+1;
           		}
           		if(arr[i]==a[1]){
           		    y=i+1;
           		}
       		}
       		cout<<(a[1]-a[0])/2<<" ml. "<<"from cup #"<<x<<" to cup #"<<y<<".";
        }
    }
	if(ans.size()==3){
    	vector<int> v;
    	for(auto i : ans){
    	    v.push_back(i);
    	}
    	if(mp[v[0]]!=1 || mp[v[2]]!=1){  //highest and lowest volume should only appear once
        	cout<<"Unrecoverable configuration.";
    	}
    	else{
        	int p,q;
        	if(v[0]+v[2] != 2*v[1]){
        	    cout<<"Unrecoverable configuration.";
        	}else{
        		for(int i=0; i<n; i++){
        	    	if(arr[i]==v[0]){
            	    	p=i+1;
            		}
            		if(arr[i]==v[2]){
            		    q=i+1;
            		}
        		}
        		cout<<(v[2]-v[0])/2<<" ml. "<<"from cup #"<<p<<" to cup #"<<q<<".";
    		}
    	}
	}
	if(ans.size()>3){
    	cout<<"Unrecoverable configuration.";
	}

return 0;
}