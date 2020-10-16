#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
#define vll vector<ll> 
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<n;i++)
#define fab(i,a,b) for(i=a;i<=b;i++)
#define f0r(i,n) for(i=n-1;i>=0;i--)
#define f1r(i,n) for(i=n;i>=1;i--)
#define fabr(i,a,b) for(i=b;i>=a;i--)
#define bs binary_search 
#define lcm(x,y) boost::math::lcm(x,y)
#define memo(a,b) memset(a,b,sizeof(a))
#define fstl(i,v) for(auto i=v.begin();i!=v.end();i++) cout<<*i<<" "
#define lb lower_bound 
#define ub upper_bound

int main() {  
  fast;
  ll t;
   cin>>t; 
   while(t--)
   {
    ll n,i,c=0,a; 
    cin>>n; 
    vector<pair<ll,ll>> v ;
    f0(i,n)
    {
    cin>>a; 
    v.push_back(make_pair(a,0));
    }
    f1(i,n)
    {
      if(v[i].first!=v[i-1].first)
      {
        c++;
        v[i].second=1;
        if(v[i-1].second!=1)
        {
         c++;  
        v[i-1].second=1;
        }
      }
    }
    cout<<c<<endl; 
    v.clear();
   }
  return 0;
 
}
    