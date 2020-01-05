struct DSU
{
    int connected;
    int par[N], sz[N];   // remember to change N !!!

    DSU() {} 

    DSU(int n)              // n is no. of distinct values possible 
    {
        for(int i=1;i<=n;i++)
        {
            par[i]=i;
            sz[i]=1;
        }
        connected=n;
    }

    int getPar(int k)               // top parent
    {
        while(k!=par[k])
        {
            par[k]=par[par[k]];
            k=par[k];
        }
        return k;
    }

    int getSize(int k)              //size of compo        
    {
        return sz[getPar(k)];
    }

    void unite(int u, int v)        // unites two compo
    {
        int par1=getPar(u), par2=getPar(v);

        if(par1==par2)
            return;

        connected--;

        if(sz[par1]>sz[par2])
            swap(par1, par2);

        sz[par2]+=sz[par1];
        sz[par1]=0;
        par[par1]=par[par2];
    }
};
