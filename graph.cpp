void bfs(vector<int>*a,int*visited,int n,int sv,queue<int>q)
{
    cout<<sv<<" ";
    visited[sv]=1;
    int i;

    for(i=0;i<a[sv].size();i++)
    {
        if(visited[a[sv][i]]==0)
        {
            visited[a[sv][i]]=1;
            q.push(a[sv][i]);
        }
            
    }
    
    if(q.size()!=0)
    {
        int s=q.front();
        q.pop();
    
      bfs(a,visited,n,s,q);

    }

}
void dfs(vector<int>*a,int*visited,int n,int sv)
{
    cout<<sv<<" ";
    visited[sv]=1;
    int i;

    for(i=0;i<a[sv].size();i++)
    {   
        if(visited[a[sv][i]]==0)
            dfs(a,visited,n,a[sv][i]);                    
    }
}    
