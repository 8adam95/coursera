#include<cstdio>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<queue>
#include<cstring>
#include<string>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long 
#define F first
#define S second
#define MP make_pair
#define PB push_back

const int MAXN = 100005;

queue<int> Q;

int n, root, height, h[MAXN];

vector<int> adj[MAXN];

void bfs(int u)
{
    Q.push(u);
    while(!Q.empty())
    {
        int v = Q.front();
        Q.pop();
        for(int i = 0; i < adj[v].size(); i++)
        {
            h[adj[v][i]] = h[v]+1;
            height = max(height, h[adj[v][i]]);
            Q.push(adj[v][i]);
        }
    }
}


int main()
{
    scanf("%d", &n);
    REP(i, n)
    {
        int u;
        scanf("%d", &u);
        if(u == -1)
            root = i;
        else
            adj[u].PB(i);
    }
    
    h[root] = 1;
    bfs(root);

    printf("%d\n", height);
    
    return 0;
}