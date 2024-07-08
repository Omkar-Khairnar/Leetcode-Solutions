
struct TrieNode {
    TrieNode* Node[26];
    int Cost = INT_MAX;
    bool flag = false;

    TrieNode() {
        for (int i = 0; i < 26; ++i)
            Node[i] = nullptr;
    }
    int costR() {
        return Cost;
    }
    bool isEnd() {
        return flag;
    }
    void setEnd(int c) {
        Cost = min(c,Cost);
        flag = true;
    }
    TrieNode* nextNode(char c) {
        return Node[c - 'a'];
    }
    void add(char c) {
        Node[c - 'a'] = new TrieNode;
    }

    bool isPresent(char c) {
        return Node[c - 'a'] != nullptr;
    }
};

class Solution {
public:
    int dfs(int idx, string& t, TrieNode* root, vector<int>& dp) {
        if (idx == t.size()) return 0;
        if (dp[idx] != -1) return dp[idx];

        int minCost = INT_MAX;
        TrieNode* node = root;

        for (int i = idx; i < t.size(); ++i) {
            char currentChar = t[i];
            if (node->nextNode(currentChar)) {
                node = node->nextNode(currentChar);
                if (node->isEnd()) {
                    int currentCost = node->costR();
                    int remainingCost = dfs(i + 1, t, root, dp);
                    if (remainingCost != INT_MAX) {
                        minCost = min(minCost, currentCost + remainingCost);
                    }
                }
            } else {
                break;
            }
        }
        return dp[idx] = minCost;
    }

    int minimumCost(string target, vector<string>& words, vector<int>& costs) {
        int n = words.size();
        TrieNode* root = new TrieNode();
        for (int i = 0; i < n; ++i) {
            TrieNode* node = root;
            for (char c : words[i]) {
                if (!node->isPresent(c)) {
                    node->add(c);
                }
                node = node->nextNode(c);
            }
            node->setEnd(costs[i]);
        }
        vector<int> dp(target.size(), -1);
        int result = dfs(0, target, root, dp);
        return result == INT_MAX ? -1 : result;
    }
};

