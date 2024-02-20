
# Lang Python3
# Problem E

def ii():
    return list(map(int, input().strip().split()))


for _ in range(ii()[0]):
    M = []  
    
    n,k = ii()
    i = 1

    while True:
       
        cur = n//2 + (n&1)
        # print(cur,k,i,n)
        if cur >= k:
            print( (2*k - 1)*i )
            break
        else:
            k -= cur 
            i = i*2
            n//=2





# Lang Python3
# Problem F

def ii():
    return list(map(int, input().strip().split()))



for _ in range(ii()[0]):
    M = []  
    
    n = 7

    for i in range(n):
        M.append(list(input().strip()))


    D1 = [[] for i in range(14)]
    D2 = [[] for i in range(14)]

    def check(M,ck):
        for i in range(1,n-1):
            for j in range(1,n-1):
                if( ((i+j)&1) == ck ):
                    if M[i][j] == "B":
                        if M[i-1][j-1] == "B" and M[i-1][j+1] == "B" and M[i+1][j-1] == "B" and M[i+1][j+1] == "B":
                        
                            return False
        return True
    
    done = False

    odb = []
    evb = []


    
    for i in range(1,n-1):
        for j in range(1,n-1):
            if ((i+j) & 1) and M[i][j] == "B":
                odb.append((i,j))
            elif ((i+j) % 2 == 0) and M[i][j] == "B":
                evb.append((i,j))

    # print(odb, evb)

    mi1 = 1000
    for i in range((1<<len(odb))):
        
        cm = 0
        for j in range(len(odb)):
            if (1<<j) & (i):
                M[odb[j][0]][odb[j][1]] = "W"
                cm += 1

        if check(M,1):
            mi1 = min(mi1, cm)

        for j in range(len(odb)):
            if (1<<j) & (i):
                M[odb[j][0]][odb[j][1]] = "B"

    mi2 = 1000
    odb = evb[:]
    # print(odb)
    for i in range((1<<len(odb))):
        
        cm = 0
        for j in range(len(odb)):
            if (1<<j) & (i):
                M[odb[j][0]][odb[j][1]] = "W"
                cm += 1

        if check(M,0):
            # print(cm)
            mi2 = min(mi2, cm)
            

        for j in range(len(odb)):
            if (1<<j) & (i):
                M[odb[j][0]][odb[j][1]] = "B"



    print(mi1 + mi2)



// Problem G
// Lang : C++ 17

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MX = 1e5 + 10;
string P;
vector<int> C[MX];
vector<int> dp1(MX),dp2(MX);

void dfs(int r = 0){
    
    dp1[r] = 0;
    dp2[r] = 0;


    for(auto i : C[r]){
        {
            dfs(i);
            dp1[r] += min(dp2[i]+1, dp1[i]);
            dp2[r] += min(dp1[i]+1, dp2[i]);
        }
    }

    if(P[r] == 'S'){
        dp1[r] = 1e6;
    }else if(P[r] == 'P'){
        dp2[r] = 1e6;
    }
}

void s(){
    int n;
    cin>>n;
    int te;
    for(int i = 0;i<n;i++){
        C[i].clear();
        if(i != 0){
            cin>>te;
            C[te-1].push_back(i);
        }
    }
    cin>>P;

    dfs();

    // for(int i = 0;i<n;i++){
    //     cout<<dp1[i]<<" ";
    // }
    // cout<<endl;
    cout<<min(dp1[0],dp2[0])<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        s();
    }
}