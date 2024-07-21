/**
 * created by : cidi mohamed mostepha
 * link : https://leetcode.com/problems/kth-ancestor-of-a-tree-node
 * Difficulty : hard
 */
class TreeAncestor {
public:
    const int N = 400000;
    int src[400000][20];
    int d[400000];
    vector<int> adj[400000];
    
    void dfs(int u = 0 , int du = 0) {
        d[u] = du;
        
        for(int i = 1 ; i < 20 ; i++) {
            if(src[u][i - 1] == -1) {
                src[u][i] = -1;
            }else {
                src[u][i] = src[src[u][i - 1]][i - 1];
            }
        }
        
        for(int v : adj[u]) {
            dfs(v , du + 1);
        }
    }
    
    TreeAncestor(int n, vector<int>& parent) {
        
       memset(src , -1 , sizeof(src));
        
       for(int i = 1 ; i < parent.size() ; i++) {
           adj[parent[i]].push_back(i);
           src[i][0] = parent[i];
       }
        
       dfs();
        
    }
    
    int getKthAncestor(int node, int k) { 
         if(d[node] < k) {
             return -1;
         }  else {
             for(int i = 0 ; i < 20 ; i++) {
                 if(k & (1 << i)) {
                     node = src[node][i];
                 }
                 if(node == -1) {
                     break;
                 }
             }
             
             return node;
         }
    }
};