#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin>>tc;
    while(tc--)
    {
        long long l,r;
        cin>>l>>r;
        if(l<=(r/2)+1){
        	cout<<(r-1)/2<<endl;
        }
        else{
        	cout<<r-l<<endl;
        }
    }

	return 0;
}