#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if((n-sx<=d||sy-1<=d)&&(m-sy<=d||sx-1<=d)){
            cout<<-1<<endl;
        }
        else
            cout<<n+m-2<<endl;
    }

	return 0;
}