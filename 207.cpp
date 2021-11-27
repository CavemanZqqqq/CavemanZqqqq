class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        for (int i = 0; i < prerequisites.size(); ++i) {
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        vector<int> visit(numCourses);  
        // 0 visited, 1 visiting, 2 wait
        
        for (int i = 0; i < numCourses; ++i) visit[i] = 2;
        
        for (int i = 0; i < numCourses; ++i) {
            if(dfs(i,visit,graph)) return false;
        }
        
        return 1;
    }
    
private: 
    bool dfs(int i, vector<int>& visit, vector<vector<int>>& graph) {
        if (visit[i] == 1) return true;
        if (visit[i] == 0) return false;
         cout<<visit[i];
        visit[i] = 1;
        for (int a = 0; a < graph[i].size(); ++a) {
            if(dfs(graph[i][a], visit, graph)) return true;
        }
        visit[i] = 0;
        cout<<endl;
        return false;
    } 
};
