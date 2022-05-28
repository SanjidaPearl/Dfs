//Bismillahir-Rahmanir-Rahim
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int llu;
typedef double dl;
#define f1(i,n) for(i=1;i<=n;i++)
#define f(i,n) for(i=0;i<n;i++)
#define Max 10000009
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sv(v) sort(v.begin(),v.end())
#define rv(v) reverse(v.begin(),v.end())
#define sa(a,n,i) sort(a+i,a+n+i);
#define sp(n) fixed<<setprecision(n)
#define ms(a,n) memset(a,n,sizeof(a));
#define lb lower_bound
#define ub upper_bound
#define lcm(a,b) (a/__gcd(a,b))*b
#define pii pair<ll,ll>
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
using namespace std;
vector<ll>vec[100002];
ll vis[100002];
void dfs(ll src)
{
    ll x,y,i,j;
   vis[src]=1;
    for(i=0;i<vec[src].size();i++)
    {
        ll v=vec[src][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    ll t,ans,n,p,g,u,v,i,j,w;
     cin>>t;
    while(t--){
            ms(vis,0);
            ms(level,0);
    cin>>n>>m;
    f1(i,m)
    {
        cin>>u>>v;
        vec[u].pb(v);
        vec[v].pb(u);
    }
    dfs(1);
    for(i=0;i<=n;i++)
        vec[i].clear();
    }
}


