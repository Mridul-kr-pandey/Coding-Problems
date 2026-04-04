class Solution {
public:
    void dfs(int node,int des,vector<vector<int>>& graph,vector<int>& path,vector<vector<int>>& res){
        path.push_back(node);
        if(node==des)
            res.push_back(path);
        else{
            for(int neighbour:graph[node]){
                dfs(neighbour,des,graph,path,res);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> path;
        vector<vector<int>> res;
        dfs(0,graph.size()-1,graph,path,res);
        return res;
    }
};