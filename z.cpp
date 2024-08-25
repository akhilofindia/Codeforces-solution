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

const int kMaxN = 1e6 + 10;
struct Node {
    int prev, next, pairIndex;
} a[kMaxN];

int n, m, p, p2;
stack<int>st;
string s,t;
signed main() {
    cin>>n>>m>>p>>s>>t;
    p--; 
    for (int i = 0; i < s.size(); i++) {
        a[i].prev = i - 1;
        a[i].next = i + 1;
        if (s[i] == '(') {
            st.push(i); 
        } else {
            int match = st.top();
            st.pop();
            a[i].pairIndex = match;
            a[match].pairIndex = i;
        }
    }
    for (int i = 0; i < t.size(); i++) 
    {
        if (t[i] == 'L') 
        {
            p=a[p].prev;
        }else if (t[i]=='R'){
            p=a[p].next;
        }else if (t[i]=='D'){
            p=min(p,a[p].pairIndex);
            p2=a[p].pairIndex;
            if (a[p].prev != -1) 
            {
                a[a[p].prev].next =a[p2].next;
            }
            if (a[p2].next != n) 
            {
                a[a[p2].next].prev = a[p].prev;
            }
            if (a[p].prev != -1 && a[a[p].prev].next==n) {
                p=a[p].prev;
            } else{
                p=a[p2].next;
            }
        }
    }
    while (p!=0 && a[p].prev!=-1) 
    {
        p=a[p].prev;
    }
    while (p<n) {
        cout<<s[p];
        p=a[p].next;
    }
    cout<<endl;

    return 0;
}
