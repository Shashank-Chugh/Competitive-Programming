ll modMul(ll a, ll b, ll c)
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
ll powG(ll x,ll y )
{

  if(y==1)return x;
  if(y==0)return 1;

  ll temp=powG(x,y/2);

  temp = modMul(temp,temp);

  if(y&1)
    temp=modMul(temp,x);
 
  return temp;
}
