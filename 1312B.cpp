#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int n; cin >> n;
        vector <int> ans(n);
        for(int i = 0; i < n; i++){
           cin >> ans[i];
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        for(int i = 0; i < n; i++){
           cout << ans[i] << " ";
        }
        cout << endl;
	}

	return 0;
}