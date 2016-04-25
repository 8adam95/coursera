#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define PB push_back
#define MP make_pair
#define ll long long
#define F first
#define S second

const int MAXN = 1005;

vector<int> adj[MAXN];

bool vis[MAXN];

int cnt = 0;

void dfs(int u)
{
    vis[u] = true;
    for(int i = 0; i < adj[u].size(); i++)
    {
        if(!vis[adj[u][i]])
            dfs(adj[u][i]);
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    while(m--)
    {
        int u, v;
        scanf("%d %d", &u, &v);
        u--, v--;
        
        adj[u].PB(v);
        adj[v].PB(u);
        
    }
    
    REP(i, n)
        if(!vis[i])
        {
            cnt++;
            dfs(i);
        }
        
        
    printf("%d\n", cnt);
    

    return 0;
}