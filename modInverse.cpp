int xgcd(int a, int b, int &x, int &y) //Returns GCD of A, B
{
	if(a==0) 
	{
		x=0;
		y=1;
		return b;
	}
	int x1, y1;
	int d = xgcd(b % a, a, x1, y1);
	x = y1 - (b/a)*x1;
	y = x1;
	return d;
}

int modular_inverse(int a, int m)
{
	int x, y;
	int g=xgcd(a, m, x, y);
	if(g!=1)
		return -1;
	else
	{
		x=(x%m + m)%m;
		return x;
	}
}





// approach for primes using exponentiation
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
ll powMod(ll n,ll p,ll m)
{
    ll res=1;
    n%=m;
    while(p){
        if(p&1)
            res = modmul(res,n,m)%m;
        p=p>>1;
        n = modmul(n,n,m)%m;
    }
    return res;
}

int modInverse(int a,int m) // if m is prime
{
  return powMod(a,m-2,m);
}
