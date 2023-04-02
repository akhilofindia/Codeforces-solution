#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin >> tc;
    while (tc--) {
        string s; cin >> s;
        int a = ((s[0] - '0')-1)*10;
        int b=s.length();
        a += b*(b+1)/2;
        cout << a << endl;
    }

	return 0;
}