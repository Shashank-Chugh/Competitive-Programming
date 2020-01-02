class graph
{
    public: 
        int n_v,n_e;
        vector<vector<int>> adj_list;
        bool isDirected;
        vector<int> isVisited;
        vector<int> indeg; //Stores indegree of all Nodes
        vector<int> topo; //Stores lexicographically smallest toposort

        void take_input(bool =true);

        void show_adj_list();

        void addEdge(int ,int ,bool =true);

        void dfs(int );

        void bfs(int );

        bool toposort();

};

void graph::take_input(bool isDir)
{
    cin>>n_v>>n_e;
    adj_list.resize(n_v);
    isVisited.resize(n_v);
    fill(all(isVisited),-1);
    isDirected = isDir;
    int to,fro;
    for(int i=0;i<n_e;++i)
    {
        cin>>to>>fro;
        addEdge(to-1,fro-1,isDir);
    }
}

void graph::show_adj_list()
{
    int i;
    cout<<"No. of Vertices = "<<n_v<<en;
    cout<<"No. of Edges = "<<n_e<<en;
    rep(i,0,n_v)
    {
        int j;
        cout<<i<<"-> ";
        rep(j,0,adj_list[i].size())
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<en;
    }
}

void graph::addEdge(int to,int fro,bool isDir)
{
    adj_list[to].push_back(fro);
    if(isDir)
        adj_list[fro].push_back(to);
}
void graph::bfs(int source)
{
    fill(all(isVisited),-1);
    queue<int> q;
    q.push(source);
    isVisited[source] = 0;
    while(!q.empty())
    {
        int parent = q.front();
        cout<<parent+1<<" ";
        q.pop();
        int child;
        rep(child,0,adj_list[parent].size())
        {
            if(isVisited[adj_list[parent][child]]==-1)
            {
                q.push(adj_list[parent][child]);
                isVisited[adj_list[parent][child]] = isVisited[parent] + 1;
            }
        }
    }
}
void graph::dfs(int source)
{
    isVisited[source] = 1;
    cout<<source+1<<" "; 
    int i;
    rep(i,0,adj_list[source].size())
        if(isVisited[adj_list[source][i]]==-1)
            dfs(adj_list[source][i]);
}

/*Use Case
  graph g;
    g.take_input();
    g.show_adj_list();
*/
