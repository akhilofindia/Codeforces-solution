#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

bool isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

bool isChar(char ch) {
    return ch >= 'a' && ch <= 'z';
}

bool isSortedDigits(const vector<int>& digits) {
    for (size_t i = 1; i < digits.size(); ++i) {
        if (digits[i] < digits[i - 1]) {
            return false;
        }
    }
    return true;
}

bool isSortedChars(const vector<char>& chars) {
    for (size_t i = 1; i < chars.size(); ++i) {
        if (chars[i] < chars[i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string s; cin>>s;
		int flag=0;
		vector<int>dig;
		vector<char>let;
		for (int i = 0; i < n; i++)
		{
			if (isDigit(s[i]))
			{
				dig.push_back(s[i]);
			}else{
				let.push_back(s[i]);
			}
			if (isChar(s[i]))
			{
				for (int j = i+1; j < n; j++)
				{
					if (isDigit(s[j]))
					{
						flag=1;
						break;
					}
				}
			}
			if (flag==1)
			{
				break;
			}
		}
		if (!isSortedDigits(dig))
		{
			flag=1;
		}
		if (!isSortedChars(let))
		{
			flag=1;

		}
		if (flag==1)
		{
			cn;
		}else cy;
	}

	return 0;
}