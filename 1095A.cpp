#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
    string s;
    cin>>s;
    int sum=1;
    string a;
    for(int i=0;i<n;i++){
        a+=s[i];
        i+=sum;
        sum++;
    }
    cout<<a<<endl;

	return 0;
}