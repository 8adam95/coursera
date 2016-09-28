#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

#define REP(I, N) for(int I = 0; I < (N); I++)
#define FOR(I, A, B) for(int I = (A); I <= (B); I++)
#define FORD(I, A, B) for(int I = (A); I >= (B); I--)
#define ll long long
#define F first
#define S second
#define MP make_pair
#define PB push_back


pair<char, int> arr[100005];

string a;

int main()
{
    
    cin >> a;
    int n = a.length();
    
    int l = 0;
    
    REP(i, n)
    {
        if(a[i] == '(' || a[i] == '[' || a[i] == '{')
        {
            arr[l] = MP(a[i], i);
            l++;
        }
        if(a[i] == ')')
        {
            if(l ==  0 || arr[l-1].F != '(')
                    return printf("%d\n", i+1), 0;
            else
                l--;
        }
        if(a[i] == ']')
        {
            if(l ==  0 || arr[l-1].F != '[')
                    return printf("%d\n", i+1), 0;
            else
                l--;
        }
        
        if(a[i] == '}')
        {
            if(l ==  0 || arr[l-1].F != '{')
                    return printf("%d\n", i+1), 0;
            else
                l--;
        }
    }
    
    if(l > 0)
        return printf("%d\n", arr[l-1].S+1), 0;
    else
        printf("Success\n");
    
    
    
    return 0;
}