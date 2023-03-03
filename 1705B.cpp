#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,time,a=INT_MAX;;
    int b=0,count=1;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>time;
        if (a>time){
            a=time;
            b=i;
            count=1;
        }else if (time==a){
            count++;
        }
    }
    if (count==1){
        cout<<b<<endl;
    }else
        cout<<"Still Rozdil"<<endl;

	return 0;
}