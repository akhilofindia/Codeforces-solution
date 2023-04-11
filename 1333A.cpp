#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc; cin>>tc;
	while(tc--){
		int a, b;
		cin >> a >> b;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (i == 1 && j == 1) {
					cout << "W";
				} else {
					cout << "B";
				}
			}
			cout << endl;
		}
	}

	return 0;
}