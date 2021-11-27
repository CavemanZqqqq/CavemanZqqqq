class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        //int
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (dict.count(endWord) == 0) return 0;
        
        queue<string> q;
        q.push(beginWord);
        int step = 0;
        int l = beginWord.size();
        
        //bfs
        while (!q.empty()) {
            step += 1;
            cout<<step<<endl;
            int qsize = q.size();
            for (int size = 0; size < qsize; ++size) {
                string w = q.front();
                q.pop();
                for (int i = 0; i < l; i++) {
                    char ch = w[i];
                    for (int j ='a'; j <= 'z'; j++) {
                        w[i] = j;
                        // find out
                        if (w == endWord) {
                            return step + 1;    
                        }
                        
                        //next step
                        if (!dict.count(w)) continue; 
                        q.push(w);
                        dict.erase(w);
                    }
                    w[i] = ch;

                }
            }        
        }
        return 0;
    }
};
