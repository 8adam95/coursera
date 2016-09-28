#include<cstdio>
#include<set>
#include<map>
#include<algorithm>
#include<vector>
#include<iostream>
#include<cstring>
using namespace std;


#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back


const int MAXN = 1003;

vector<int> adj[MAXN];

bool vis[MAXN];

bool dfs(int u)
{
    vis[i] = true;
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
    }
    
    for(int i = 0; i < n; i++)
    {
        if(!vis[i])
            dfs(i);
    }
    
    


    return 0;
}