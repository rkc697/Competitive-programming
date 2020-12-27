https://codeforces.com/contest/1334/problem/A



/*
    Don't take criticism from people you wouldn't ever go to for advice
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
        ll n,f=1;
        cin>>n;
        ll a[n],b[n];
        fl(i,0,n)cin>>a[i]>>b[i];
        if(a[0]<b[0])
        {
            cout<<"NO"<<endl;
            continue;
        }
        fl(i,1,n)
        {
            if(a[i]<a[i-1] || b[i]<b[i-1] || b[i]>a[i] || (b[i]-b[i-1]) > (a[i]-a[i-1]))
            {
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


https://codeforces.com/contest/1334/problem/B


/*
    Don't take criticism from people you wouldn't ever go to for advice
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
        ll n,x,f=0,s=0;
        lld q=0;
        cin>>n>>x;
        ll a[n];
        fl(i,0,n)cin>>a[i],s+=a[i];
        sort(a,a+n);
        fl(i,0,n)
        {
            q=s/(lld)(n-i);
            if(q>=x)
            {
                f=1;
                cout<<n-i<<endl;
                break;
            }
            s-=a[i];
        }
        if(!f)cout<<0<<endl;
    }
}



https://codeforces.com/contest/1334/problem/C


/*
    Don't take criticism from people you wouldn't ever go to for advice
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
        ll n,q=0,w=0,e,y,x,a,b;
        cin>>n;
        vpp v;
        fl(i,0,n)
        {
            cin>>a>>b;
            v.pb({a,b});
            q+=max((ll)0,v[i].ff-w);
            w=v[i].ss;
        }
        e=q,w=q;
        fl(i,1,n)
        {
            y=w;
            y-=v[i-1].ff;
            y+=v[i].ff;
            y-=max((ll)0,v[i].ff-v[i-1].ss);
            x=i-2;
            if(x<0)x=n-1;
            y+=max((ll)0,v[i-1].ff-v[x].ss);
            w=y;
            e=min(e,y);
        }
        cout<<e<<endl;
    }
}



https://codeforces.com/contest/1334/problem/D



/*
    Don't take criticism from people you wouldn't ever go to for advice
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
        ll n,l,r,s=0,q=1;
        cin>>n>>l>>r;
        vector<ll> v;
        if(l==n*(n-1)+1)
        {
            cout<<1<<endl;
            continue;
        }
        while(1)
        {
            if(s+2*(n-q)>=l)break;
            s+=2*(n-q);
            q++;
        }
        ll a=q,b=q+1;
        while(1)
        {
            if(l<=s+1 and s+1<=r)v.pb(a);
            if(l<=s+2 and s+2<=r)v.pb(b);
            if(s>r)break;
            s+=2;
            if(b<n)b++;
            else
            {
                a++;
                if(a==n)a=1;
                b=a+1;
            }
        }
        for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }
}
