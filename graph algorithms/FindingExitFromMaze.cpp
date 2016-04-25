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
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back


const int MAXN = 1005;

bool vis[MAXN];
vector<int> adj[MAXN];


void dfs(int u)
{
    vis[u] = true;
    for(int i = 0; i < adj[u].size(); i++)
        if(!vis[adj[u][i]])
            dfs(adj[u][i]);
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
    
    int beg, end;
    scanf("%d %d", &beg, &end);
    
    beg--;
    end--;
    
    REP(i, n)
        vis[i] = 0;
        
    dfs(beg);
    
    
    if(vis[end])
    {
        printf("1\n");
        return 0;
    }
    
    printf("0\n");
    
    
    
    return 0;
}

/*
#include <iostream>
#include <vector>

using std::vector;
using std::pair;


int reach(vector<vector<int> > &adj, int x, int y) {
  //write your code here
  return 0;
}

int main() {
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (size_t i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  int x, y;
  std::cin >> x >> y;
  std::cout << reach(adj, x - 1, y - 1);
}*/