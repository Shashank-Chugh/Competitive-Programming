ll gcdExtended(ll a,ll b,ll &x,ll &y)
{
    // Base Case
    if (a == 0)
    {
        x = 0, y = 1;
        return b;
    }

    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, x1, y1);

    // Update x and y using results of recursive
    // call
    x = y1 - (b/a) * x1;
    y = x1;

    return gcd;
}

ll modInverse(ll a,ll m)
{
    ll x, y;
    ll g = gcdExtended(a, m, x, y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // m is added to handle negative x
        ll res = (x%m + m) % m;
        return res;
    }
}

int fact[N], invfact[N];

void precompute(int m)
{
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++)
    {
        fact[i]=(fact[i-1]*i)%m;
    }
    invfact[N-1]=modInverse(fact[N-1] ,m);
    for(int i=N-2;i>=0;i--)
    {
        invfact[i]=(invfact[i+1]*(i+1))%m;
    }
}

ll nCr(ll n,ll r,int m) 
{ 
   // Base case  
    if(n==0||n<r)
        return 0;
    if (r==0||n==r) 
        return 1;   
  
    // Fill factorial array so that we can find all factorial of r, n and n-r 
    
    return ( ((fact[n]*invfact[r]) %m) * invfact[n-r] )%m; 
}

