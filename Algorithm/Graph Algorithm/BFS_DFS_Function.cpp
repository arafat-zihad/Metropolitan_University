#include<bits/stdc++.h>
using namespace std;

int visit_bfs[1000005];
int visit_dfs[1000005];

vector<int> bfs(int s_node, vector<int>adj[])
{
    queue<int>q;
    visit_bfs[s_node] = 1;
    q.push(s_node);
    // cout << "BFS Output: ";
    vector<int>bfs_output;
    while(!q.empty())
    {
        int fr = q.front();
        q.pop();
        //cout << fr << " ";
        bfs_output.push_back(fr);
        for(int i=0; i<adj[fr].size(); i++)
        {
            if(!visit_bfs[adj[fr][i]])
            {
                visit_bfs[adj[fr][i]] = 1;
                q.push(adj[fr][i]);
            }
        }
    }
    return bfs_output;
}

void dfs(int s_node, vector<int>adj[])
{
    stack<int>s;
    visit_dfs[s_node] = 1;
    s.push(s_node);
    cout << "DFS Output: ";
    while(!s.empty())
    {
        int fr = s.top();
        s.pop();
        cout << fr << " ";
        for(int i=0; i<adj[fr].size(); i++)
        {
            if(!visit_dfs[adj[fr][i]])
            {
                visit_dfs[adj[fr][i]] = 1;
                s.push(adj[fr][i]);
            }
        }
    }
}

int main()
{
    int n, m, s;
    cin >> n >> m;
    vector<int>adj[n+1];
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin >> s;
    vector<int>b = bfs(s, adj);
    cout << "BFS Output: ";
    for(int i=0; i<b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    dfs(s, adj);

}