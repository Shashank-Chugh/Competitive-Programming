#include "bits/stdc++.h"
 
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp>
 
//using namespace __gnu_pbds; 
 
//#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
 
//#include <boost/math/common_factor.cpp>
using namespace std;
#define             fi                  first
#define             sec                 second
#define             mod                 1000000007
#define             MOD                 998244353
#define             mod9                1000000009
#define             ll                  long long
#define             ld                  long double
#define             int                 long long
#define             pii                 pair<int ,int>
#define             pll                 pair<ll,ll>
#define             pb                  push_back
#define             rep(i,a,b)          for(i=a;i<(int)b;i++)
#define             repr(i,a,b)         for(i=a;i>=(int)b;i--)
#define             mp                  make_pair
#define             t()                 int t;cin>>t;while(t--)
#define             vll                 vector<ll>
#define             setbits(x)          __builtin_popcountll(x)
#define             all(p)              p.begin(), p.end()
#define             N                   1000005
#define             MAXN                100
//#define T pair<int, int>
//#define ordered_set tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>
   
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
bool isV(char x){if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){return 1;}return 0;}
bool isP(ll n){for(ll i=2;i*i<=n;i++){if(n%i==0)return 0;}return 1;} 
 
 
void fio()
{
   #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("ii.txt", "r", stdin);
    // for writing output to output.txt
    freopen("oo.txt", "w", stdout);
    #endif
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}
void print(int*a,int n){
    int i;
    rep(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void print2d(int a[][1000],int m,int n){
    int i,j;
    rep(i,0,m){
        rep(j,0,n){
            cout<<setw(2)<<a[i][j];
        }
        cout<<endl;
    }
} 
/*bool comp(pii i1, pii i2) 
{
    //For Ascending Order (i1.fi < i2.sec)
    if(i1.sec == i2.sec)
        return (i1.fi > i2.fi);
 
    return (i1.sec > i2.sec); 
}*/ 
 
//All Functions below this


//Main Function
int32_t main()
{
    fio();  
    
}

