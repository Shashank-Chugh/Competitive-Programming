ll modMul(ll a, ll b, ll c)
{   
  /*  a%=c;

    ll ans = 0;

    while(b)
    {
        if(b&1)
        {
            ans = (ans+a)%c;
        }

        a = (a+a)%c;
        b >>= 1;
    }

    return ans;
    */
    return (a*b)%c;
}
ll powMod(ll n,ll p,ll m)
{
    ll res=1;
    n%=m;
    while(p){
        if(p&1)
            res = modMul(res,n,m)%m;
        p=p>>1;
        n = modMul(n,n,m)%m;
    }
    return res;
}
