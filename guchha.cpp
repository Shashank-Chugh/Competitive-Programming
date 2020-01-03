vector<int>v[26];
    int c=1;
    rep(i,1,n)
    {
        if(s[i]==s[i-1])c++;
 
        else
        {
            v[s[i-1]-'a'].pb(c);
            c=1;
        }
    }
    v[s[n-1]-'a'].pb(c);
