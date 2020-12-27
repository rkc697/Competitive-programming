https://codeforces.com/contest/1339/problem/A

/*
    Success is a lousy teacher, it seduces smart people into thinking they can't lose
*/
#include<bits/stdc++.h>
using namespace std;
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define vpp vector<pair<ll,ll>>
#define pii pair<ll,ll>
#define ff first
#define ss second
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1000000007;
const double pi  =acos(-1);
const int N = 2e5 + 10;
int main()
{
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll n;
        cin>>n;
        cout<<n<<endl;
    }
}


https://codeforces.com/contest/1339/problem/B


/*
    Success is a lousy teacher, it seduces smart people into thinking they can't lose
*/
#include<bits/stdc++.h>
using namespace std;
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define vpp vector<pair<ll,ll>>
#define pii pair<ll,ll>
#define ff first
#define ss second
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1000000007;
const double pi  =acos(-1);
const int N = 2e5 + 10;
int main()
{
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        fl(i,0,n)cin>>a[i];
        ll q=n-1;
        sort(a,a+n);
        fl(i,0,n/2)
        {
            b[q]=a[n-i-1];
            q--;
            b[q]=a[i];
            q--;
        }
        if(n&1)b[q]=a[n/2];
        fl(i,0,n)cout<<b[i]<<" ";
        cout<<endl;
    }
}

https://codeforces.com/contest/1339/problem/C


/*
    Success is a lousy teacher, it seduces smart people into thinking they can't lose
*/
#include<bits/stdc++.h>
using namespace std;
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define vpp vector<pair<ll,ll>>
#define pii pair<ll,ll>
#define ff first
#define ss second
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1000000007;
const double pi  =acos(-1);
const int N = 2e5 + 10;
int main()
{
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll n,q,w=0,e=0;
        cin>>n;
        ll a[n];
        fl(i,0,n)cin>>a[i];
        fl(i,1,n)
        {
            if(a[i]<a[i-1])
            {
                q=a[i-1]-a[i];
                if(q>w)w=q;
                a[i]=a[i-1];
            }
        }
        while(w!=0)
        {
            w/=2;
            e++;
        }
        cout<<e<<endl;
    }
}



https://codeforces.com/contest/1339/problem/D


#include<bits/stdc++.h>
using namespace std;
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define vpp vector<pair<ll,ll>>
#define pii pair<ll,ll>
#define ff first
#define ss second
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1000000007;
const double pi  =acos(-1);
const int N = 2e5 + 10;
set<ll> s;
vector<ll> adj[N],leaves;
ll level[N];
void dfs(ll u,ll p)
{
    level[u]=level[p]+1;
    for(ll i:adj[u])
    {
        if(i!=p)dfs(i,u);
    }
    if(adj[u].size()==1)
    {
        leaves.pb(u);
        s.insert(adj[u][0]);
    }
}
int main()
{
    CoDeFoRcEs_and_ChIlL;
    ll n,mn;
    cin>>n;
    fl(i,0,n-1)
    {
        ll a,b;
        cin>>a>>b;
        a--;b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(0,0);
    ll o=0,e=0;
    for(ll i:leaves)
    {
        if(level[i] & 1)o++;
        else e++;
    }
    if(o and e)mn=3;
    else mn=1;
    cout<<mn<<" "<<n-1-leaves.size()+s.size();
}
