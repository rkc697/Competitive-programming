Solution to  -------    https://codeforces.com/contest/1451/problem/A

#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define pii pair<ll,ll>
#define ff first
#define ss second
#define endl '\n'
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1e12+7;
const double pi  =acos(-1);
const long long int N = 255;
int main()
{  
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            if(n<=2)cout<<1<<endl;
            else cout<<2<<endl;
        }
        else
        {
            if(n==3)cout<<2<<endl;
            else if(n>=5)cout<<3<<endl;
            else cout<<0<<endl;
        }
    }
}



Solution to    --------    https://codeforces.com/contest/1451/problem/B

#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define pii pair<ll,ll>
#define ff first
#define ss second
#define endl '\n'
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1e12+7;
const double pi  =acos(-1);
const long long int N = 255;
int main()
{  
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        s='a'+s;
        fl(i,0,q)
        {
            ll l,r;
            cin>>l>>r;
            ll q=-1;
            fl(i,1,l)if(s[i]==s[l])q++;
            fl(i,r+1,n+1)if(s[i]==s[r])q++;
            if(q==-1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        
    }
}


Solution to   ---------  https://codeforces.com/contest/1451/problem/C


#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define pii pair<ll,ll>
#define ff first
#define ss second
#define endl '\n'
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1e12+7;
const double pi  =acos(-1);
const long long int N = 255;
int main()
{  
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll n,k,h1[26]={0},h2[26]={0},c=0;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;
        fl(i,0,n)h1[a[i]-'a']++;
        fl(i,0,n)h2[b[i]-'a']++;
        fl(i,1,26)
        {
            h1[i]+=h1[i-1];
            h2[i]+=h2[i-1];
        }
        fl(i,0,26)
        {
            if(h2[i]>h1[i])c++;
            if((h2[i]-h1[i])%k!=0)c++;
        }
        if(c)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}


Solution to   --------     https://codeforces.com/contest/1451/problem/D


#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define CoDeFoRcEs_and_ChIlL ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define rfl(i,a,b) for(ll i=a;i>b;i--)
#define pb push_back
#define mp make_pair
#define test ll t;cin>>t;while(t--)
#define lld long double
#define pii pair<ll,ll>
#define ff first
#define ss second
#define endl '\n'
#define trace(x) cerr<<#x<<": "<<x<<" "<<endl;
const ll M =1e12+7;
const double pi  =acos(-1);
const long long int N = 255;
int main()
{  
    CoDeFoRcEs_and_ChIlL;
    test
    {
        ll d,k,q,w=0,c=0,c1=0,c2=0;
        cin>>d>>k;
        q=d*d;
        while(q>=w)
        {
            if(c%2==0)c1+=k;
            else c2+=k;
            w=c1*c1+c2*c2;
            c++;
        }
        if(c&1)cout<<"Utkarsh"<<endl;
        else cout<<"Ashish"<<endl;
    }
}
