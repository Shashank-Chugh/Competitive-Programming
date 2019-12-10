ll modmul(ll a, ll b, ll c)
{   
    a%=c;

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
}
