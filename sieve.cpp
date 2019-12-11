void sieve1(ll*a,ll n) //to get if a no. is prime or not in array
{
   fill(a,a+n,1);
   a[0]=a[1]=0;
   ll i;
   rep(i,2,n)
   {
      if(a[i]==0)     //composite
         continue;
      ll j=i*2;       // j=i*i if you dont want composite no. to get checked by all its prime factors
      while(j<n)
      {
         a[j]=0;      // 0 means composite
         j+=i;
      }
   }

}   



vector<ll> sieve2(ll *a,ll n) //to get least prime that divides this no. in array 
{
    vector<ll int>v;
    fill(a,a+n,0);
    ll i;
    rep(i,2,n)
    {
        if(a[i]>0)
            continue;
        a[i] = i;
        ll j=i*i;
        while(j<n)
        {
            if(a[j]==0)
                a[j]=i;
            j+=i;
        }
        v.pb(i); 
    }
    return v;
}
   
