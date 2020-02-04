//Distance stores levels, and ways stores the number of ways to get from kth vertex to any other vertex with the shortest path taken

int vis[N], dist[N], ways[N];
vector<int> v[N];
int n,m;
void bfs(int k)
{
	queue<int> q;
	q.push(k);
	ways[k]=1;
	vis[k]=1;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(auto it:v[node])
		{
			if(!vis[it])
			{
				dist[it]=dist[node]+1;
				vis[it]=1;
				ways[it]+=ways[node];
				q.push(it);
			}
			else
			{
				if(dist[node]+1==dist[it])
				{
					ways[it]+=ways[node];
				}
			}
		}
	}
}
