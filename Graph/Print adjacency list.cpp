
/*
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.
Example 1:
Input:
V = 5, E = 7
edges = [[0,1], [0,4], [4,1], [4,3], [1,3], [1,2], [3,2]]
Output: 
[[1,4], [0,2,3,4], [1,3], [1,2,4], [0,1,3]]
Explanation:
Node 0 is connected to 1 and 4.
Node 1 is connected to 0,2,3 and 4.
Node 2 is connected to 1 and 3.
Node 3 is connected to 1,2 and 4.
Node 4 is connected to 0,1 and 3.

Example 2:
Input:
V = 4, E = 3
edges = [[0,3], [0,2], [2,1]]
Output: 
[[2,3], [2], [0,1], [0]]
Explanation:
Node 0 is connected to 2 and 3.
Node 1 is only connected to 2.
Node 2 is connected to 0 and 1.
Node 3 is only connected to 0.
*/

//TC:-O(V+E) 
//SC:-O(V+E)

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int v, vector<pair<int, int>>& edges) {
        // Code here
        vector<vector<int>>ans(v);
        for(auto it : edges)
        {
            int u=it.first;
            int v=it.second;
            ans[u].push_back(v);
            ans[v].push_back(u);
            
        }
        return ans;
    }
};

