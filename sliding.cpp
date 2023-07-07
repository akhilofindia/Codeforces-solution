#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,p;
	cin>>s>>p;
    map<char,int>m;
    vector<int>v;    
    for(int i=0;i<p.size();i++){
    	m[p[i]]++;
    }
    int count=m.size();
    int i=0,j=0,k=p.size();
    int ans=0;
    while(j<s.size()){
        if(m.find(s[j])!=m.end()){
            m[s[j]]--;
            if(m[s[j]]==0){
            	count--;
            }
         }
        if(j-i+1<k){
        	j++;
        }else if(j-i+1==k){
            if(count==0){
            	ans++;   
            }
            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
                if(m[s[i]]==1){
                	count++;
                }
            }
            i++;
            j++;
        }
    }
    cout<<ans;


	return 0;
}