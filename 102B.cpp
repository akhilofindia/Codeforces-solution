#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
    cin >> s;
    int count = 0;
    while (s.size()!=1){
        int ans = 0;
        for (int i = 0; i < s.size(); i++){
            ans += s[i] - '0';
        }
        s=to_string(ans);
        count++;
    }
    cout<<count<<endl;

	return 0;
}