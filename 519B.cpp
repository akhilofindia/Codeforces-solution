#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
    cin>>n;
    int a=0,b=0,c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        a+=m;
    }
    for (int i = 0; i < n-1; i++)
    {
        cin>>m;
        b+=m;
    }
    for (int i = 0; i < n-2; i++)
    {
        cin>>m;
        c+=m;
    }
    cout<< a-b <<endl<< b-c <<endl;

	return 0;
}