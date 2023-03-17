#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a;
	int count=0, ans=0;
    cin >> n;
    int ans2=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 5){
            count++;
        }else if (a == 0){
            ans++;
        }
        if ((count*5)%9==0)
        {
        	ans2=count;
        }
    }
    if (ans2 != 0 && ans>0){
        for (int i = 0; i < ans2; i++)
        {
        	cout<<5;
        }
        for (int i = 0; i < ans; i++)
        {
        	cout<<0;
        }
    }else if (ans>0){
    	cout<<0;
    }else
        cout<<-1;

	return 0;
}