#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,ans=0,sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n ; i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]%2==0){
            ans++;
        }
        else
            count++;
    }
    if(sum%2){
        cout<<count<<endl;
    }else
        cout<<ans<<endl;
        

	return 0;
}