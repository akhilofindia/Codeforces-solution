#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
	cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        int sum=0;
        if(n%2==0){
            int x=n/2;
            while(x--){
               cout<<1;
            }
        }else{ 
            n-=3;
            cout<<7;
            int x=n/2;
            while(x--){
                cout<<"1";
            }
        }
        cout<<endl;
    }

	return 0;
}