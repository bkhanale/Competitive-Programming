#include <bits/stdc++.h>
using namespace std;
 
#define INF 0x7FFFFFFF
 
typedef pair<int, int> pi;
 
vector<vector<pi>> adj[32];     // Graph permutations
int indices[201][201];          // Adjacency list indices
int dist[32][201][201];         // APSP dp
int n, m, w, q;
 
void dijkstra(vector<vector<pi>> &adj, int graph, int src) {
    priority_queue<pi, vector<pi>, greater<pi>> q;
    q.push({0, src});
    dist[graph][src][src] = 0;
 
    while(!q.empty()) {
        int u = q.top().second; q.pop();        
 
        for(int i = 0; i < adj[u].size(); i++) {
            int cost = adj[u][i].first;
            int v = adj[u][i].second;
 
            if(dist[graph][src][u] + cost < dist[graph][src][v]) {
                dist[graph][src][v] = dist[graph][src][u] + cost;
                q.push({dist[graph][src][v], v});
            }
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    map<string, int> weather;
    cin >> n >> m >> w >> q;
 
    // You can have 2 ^ w permutations of graphs
    int maxPerms = 1 << w;
 
    // Make room for the graphs
    for(int i = 0; i < maxPerms; i++) { adj[i].resize(n); }
 
    // Read in the first graph
    for(int i = 0; i < m; i++) {
        int u, v, c; cin >> u >> v >> c;
        adj[0][--u].push_back({c, --v});
        adj[0][v].push_back({c, u});
    }
    
    // Create an index dp for quick updates to edges
    for(int y = 0; y < n; y++) {
        for(int x = 0; x < adj[0][y].size(); x++) {
            indices[y][adj[0][y][x].second] = x;
        }
    }
 
    // Copy the first graph into all the permutations
    for(int i = 1; i < maxPerms; i++) {
        adj[i] = adj[0];
    }
 
    // Update the rest of the graphs based on the weather scale
    for(int i = 0; i < w; i++) {
        string name; int edgesAffected, scale;
        cin >> name >> edgesAffected >> scale;
        weather[name] = (1 << i);
 
        for(int j = 0; j < edgesAffected; j++) {
            int u, v; cin >> u >> v; u--; v--;
            for(int k = 1; k < maxPerms; k++) {
                if(weather[name] & k) {
                    adj[k][u][indices[u][v]].first *= scale;
                    adj[k][v][indices[v][u]].first *= scale;
                }
            }
        }
    }
 
    // Now use dijkstras to dp all shortest paths
    for(int i = 0; i < maxPerms; i++) {
        for(int v = 0; v < n; v++) {
            fill(dist[i][v], dist[i][v] + n, INF);
            dijkstra(adj[i], i, v);
        }
    }
 
    // Now handle the queries
    for(int i = 0; i < q; i++) {
        int u, v, weatherCount; cin >> u >> v >> weatherCount; u--; v--;
        int weatherMask = 0;
        for(int j = 0; j < weatherCount; j++) {
            string tmp; cin >> tmp;
            weatherMask |= weather[tmp];
        }
 
        printf("Query %d: %d\n", i + 1, dist[weatherMask][u][v]);
    }
 
    return 0;
} 