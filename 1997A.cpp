#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define disp(a,x) for(auto x:a)cout<<x<<" ";
#define ce cout<<endl;
#define int long long

template<typename T>void displayVec(vector<T> a){for(int i=0;i<a.size();i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayArr(T a[], int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;}
template<typename T>void displayAdj(vector<T> adj[], int n){for(int i=0;i<=n;i++){cout<<i<<"->";displayVec(adj[i]);}}
template<typename T1, typename T2>void displayMap(map<T1,T2>mp){for(auto it : mp){cout<<it.first<<"->"<<it.second<<endl;}cout<<endl;}
template<typename T>void displaySet(set<T>st){for(auto it:st){cout<<it<<" ";}cout<<endl;}
template<typename T>void displayQueue(queue<T> q){while(!q.empty()){cout<<q.front()<<" ";q.pop();}cout<<endl;}
template<typename T>void displayPQ(priority_queue<T> pq){while(!pq.empty()){cout<<pq.top()<<" ";pq.pop();}cout<<endl;}

signed main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin>>s;
        int flag=0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i]==s[i+1]){
                flag = 1; 
                break;
            }
        }
        string s2;
        if (!flag){
            for (char c = 'a'; c <= 'z'; c++)
            {  
                if (c != s[0]){
                    s2 = c;
                    break;
                }
            }
            s2 += s;
            cout << s2 << endl;
        }else{
            int flag1 = 0;
            for (int i = 0; i < s.size() - 1; i++){
                s2 += s[i];
                if (s[i] == s[i + 1] && flag1 == 0){
                    for (char c = 'a'; c <= 'z'; c++)
                    { 
                        if (c != s[i]){
                            s2 += c;
                            flag1 = 1;
                            break;
                        }
                    }
                }
            }
            s2 += s[s.size()-1];
            cout<<s2<<endl;
        }
    }

    return 0;
}
