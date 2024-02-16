#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        string final="zzz";
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                for (int k = 0; k < 26; k++)
                {
                    int x=i+j+k+3;
                    string s="";
                    if (x==n)
                    {
                        s+=char('a'+i);
                        s+=char('a'+j);
                        s+=char('a'+k);
                        final=min(final,s);
                    }
                }
            }
        }
        cout<<final<<endl;
    }

    return 0;
}