vector<int>v[N];                   //adj list
int vis[N];                        // vis 
int n,m;
vector<int>ans;                           // no of v , e
void dfs(int sv)
{
    //cout<<sv<<" ";
    ans.pb(sv);
    vis[sv]=1;
    int i;

    for(i=0;i<v[sv].size();i++)
    {   
        if(vis[v[sv][i]]==0)
            dfs(v[sv][i]);                    
    }
} 
