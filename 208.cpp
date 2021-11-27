class Trie {
private:
    char l;
    Trie *next[26] = {nullptr};
    bool isword = false;
    
public:
    Trie() {
        
    }
    
    void insert(string word) {
        Trie *root = this;
        for (auto w : word) {
            int c = w - 'a';
            if (root->next[c] == nullptr) {
                root->next[c] = new Trie;
                root->next[c]->l = c;
            }
            root = root->next[c];
        }
        root->isword = true;
    }
    
    bool search(string word) {
        Trie *root = this;
            
        for (auto w : word) {
            int c = w - 'a';
            if (!root->next[c]) return false;
            root = root->next[c];
        }
        return root->isword;
    }
    
    bool startsWith(string prefix) {
        Trie *root = this;
        for (auto w : prefix) {
            int c = w - 'a';
            if (!root->next[c]) return false;
            root = root->next[c];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
