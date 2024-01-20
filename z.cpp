#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";

template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}

int main(){
    int n,k ; cin>>n>>k;
    string s; cin>>s;
    int x=0,o=0,dot=0;
    int ans=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int start=0,end=0;
        while(end<k){
            if (s[end]=='x')
            {
                x++;
            }else if (s[end]=='.')
            {
                dot++;
            }else o++;
            end++;
        }                         //end-start=k now
        if (x==0)
        {
            ans=min(ans,dot);
        }
        while(n>end){
            if (s[start]=='o')
            {
                o--;
            }else if (s[start]=='x')
            {
                x--;
            }else{
                dot--;
            }

            start++;

            if (s[end]=='o')
            {
                o++;    
            }else if (s[end]=='x')
            {
                x++;
            }else dot++;

            end++;

            if (x==0)   //if no x in current window
            {
                ans=min(ans,dot);
            }
            // cout<<start<<" "<<end<<endl;
        }
    }
   cout<<ans<<endl;

    return 0;
}