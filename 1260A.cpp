#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
    cin>>tc;
    while (tc--)
    {
        int a,b,c,d,sum;
        cin>>a>>sum;
        b=sum/a;
        int ans=sum%a;
        c=ans*(b+1)*(b+1);
        d=(a-ans)*b*b;
        cout<< c+d << endl;
    }

	return 0;
}